#include<bits/stdc++.h>
using namespace std;
float  s(float  a[], float n,float k){ float sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1,j=0;i>=0&&j<n;i--,j++){
		sum+=a[i]*pow(k,j);}
	
	return sum;
}

int main(){
	int  n,g,k;
	cin>>n>>k;
	float  a[n];
	g=s(a,n,k);
	cout<<g;
	return 0;
	
}
