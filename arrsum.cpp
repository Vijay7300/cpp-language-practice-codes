#include<bits/stdc++.h>
using namespace std;
float  incre(float  a[], float b[],float n){ 
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		b[i]=a[i];}
		cout<<"new arr: ";
		for(int i=1;i<n;i++){
		cout<<b[i]<<" ";
	}cout<<a[0];

}

int main(){
	int  n,g;
	cin>>n;
	float  a[n];
	float  b[n];
	g=incre(a,b,n);
	//cout<<a[0];//
	return 0;
	
}
