#include<bits/stdc++.h>
using namespace std;

int main(){
	  int  n;
	cin>>n;
	int  a[n][n];
	int  b[n][n];
	int  z[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){ //martix 1
		cin>>a[i][j];}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){ //martix 2
		cin>>b[i][j];}
	}
		for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){   // initilaze martix z
		z[i][j]=0;}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
		z[i][j]+=a[i][k]*b[k][j];}
	}
} cout<<"ans-matrix:"<<"\n";
	   for(int i=0;i<n;i++){
		   for(int j=0;j<n;j++){ //for output matrix
		   cout<<z[i][j]<<" ";
	     }cout<<endl;
}
	return 0;
	
}
