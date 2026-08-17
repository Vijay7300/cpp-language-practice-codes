#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p=0,q=0,r=0,s=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
	if(a[i]>=0){
		 p++;}
		} cout<<"total +ve no: "<<p<<"\n";
		
	for(int i=0;i<n;i++){
	if(a[i]<0){
		 q++;}
	}	 cout<<"total -ve no: "<<q<<"\n";

for(int i=0;i<n;i++){
	if(a[i]%2==0){
		 r++;}
	}	 cout<<"total even no: "<<r<<"\n ";
	
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
		 s++;}
	}	 cout<<"total odd no: "<<s<<" ";
	return 0;
}
