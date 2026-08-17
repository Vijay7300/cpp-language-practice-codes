#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,t=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){int t=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j])
				t++;}
		//sum=a[i]*t;
	cout<<a[i]<<"-"<<t<<"  ";}
}
