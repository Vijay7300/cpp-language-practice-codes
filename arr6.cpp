#include<bits/stdc++.h>
using namespace std;
int  P(int n,int *a){  int p,i=1;
     while(i<=n){ 
     if(n%10%2==0){
     p=n%10;
     n/=10;
	 break;}
    else
     	n/=10;i++;
	 }
	*a=p;
	return n%10;
}
	
int main(){
	int n,a,k,b;
	cin>>n;
b=	P(n,&a);
	cout<<"led:"<<a<<"\n";
	cout<<"bled:"<<b<<"\n";
	return 0;
}
