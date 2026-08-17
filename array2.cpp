#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int t=1;
		for(int j=0;j<i+1;j++)
			t=t*(a[i]+a[i+1]);
			sum+=t;
	}
	cout<<sum;
	return 0;
}
