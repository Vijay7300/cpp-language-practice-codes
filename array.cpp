#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b=1,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n-1;i++)
	if(a[i-1]<=a[i]&&a[i]>=a[i+1])
	cout<<a[i]<<" ";
	else
	i++;
	return 0;
}
