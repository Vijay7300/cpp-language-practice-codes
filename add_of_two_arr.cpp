#include<bits/stdc++.h>
using namespace std;
int s(int a[],int n){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int v(int b[],int n){
	for(int i=0;i<n-1;i++)
	cin>>b[i];
}
int sum(int a[],int b[],int n,int c[]){int sum=0;
	for(int i=1;i<n;i++)
	sum+=a[i]*i;
}
int t(int c[],int n){
	for(int i=0;i<n;i++)
	cout<<sum<<" ";
}
int main(){
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	s(a,n);
	v(b,n);
	
	sum(a,b,n,c);
	t(c,n);
	return 0;
}


import math

n = 5
print("Factorial of", n, "=", math.factorial(n))
