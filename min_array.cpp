#include<bits/stdc++.h>
using namespace std;
 int main(){
	long int n,p=9999999;
	cin>>n;
	long int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
       p=min(p,a[i]);}
       cout<<"minimum:"<<p;
	return 0;
}
