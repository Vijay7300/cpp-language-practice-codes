#include<bits/stdc++.h>
using namespace std;

int main(){
	  int  n;
	cin>>n;
	int  a[n];
	int  b[n];
	int  z[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	} 
		for(int i=0;i<n;i++){
      z[i]=a[i]+b[i];
	}
	for(int i=0;i<n;i++){
		cout<<z[i]<<" ";}

	return 0;
	
}
