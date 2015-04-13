#include<cstdlib>
#include<vector>
#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n,s,sumt=0,sumf=0,sumb=0;
	int i=0;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>n;
	vector<int> v1(n);
	
	while(inFile>>s){
		v1[i]=s;
		i++;
	}
	
	sort(v1.begin(),v1.end());
	for(i=0;i<(n-5);i++){
		sumf=sumf+v1[i];
	}
	for(i=0;i<n;i++){
		sumt=sumt+v1[i];
	}
	sumb=sumt-sumf;
	cout<<sumb<<endl;


}
