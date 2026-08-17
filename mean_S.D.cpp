#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,s1=0,s2=0;
	cin>>n;
  int  a[n];
		for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		s1+=a[i];
	}
	for(int i=0;i<n;i++){
		s2+=a[i]*a[i];
	}
float m=float(s1)/n;
float sd=sqrt((s2/n)-(m*m));
	cout<<"mean: "<<m<<"\n"<<"standard devition: "<<sd;
	return 0;
	
}
/*  15
-6 -12 8 13 11 6 7 2 -6 -9 -10 11 10 9 2
mean: 2.4
standard devition: 8.38093    */
