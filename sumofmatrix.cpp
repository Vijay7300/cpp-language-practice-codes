#include<bits/stdc++.h>
using namespace std;

int main(){
	  int  n;
	cin>>n;
	int  a[n][n];
	int  b[n][n];
	int  z[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>a[i][j];}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>b[i][j];}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		z[i][j]=a[i][j]+b[i][j];}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cout<<z[i][j]<<" ";
	}cout<<endl;
}
	return 0;
	
}
