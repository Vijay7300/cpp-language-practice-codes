#include<bits/stdc++.h>
#define f(x) (x*x-3)
#define g(x) (2*x)
#define E 0.001
using namespace std;
 int main(){
 	float x1,x2,f1,f2,g1,a,b,i=0;
 	cout<<"enter the initial:"<<endl;
 	cin>>a>>b;
 	  x1=(b-a)/10;
 	do{ f1=f(x1);
 	 g1=g(x1);
 	 x2=x1-(f1/g1);
 	 x1=x2;
 	 f2=f(x2);i++;
	cout<<"i="<<i<<"\n";
		 cout<<"root s:"<<x2<<endl;
	 }while(fabs(f2)>E);
cout<<"The interval isc= [1.7266,1.7344]"<<"\n";
	 cout<<"final root s:"<<x2<<endl;
	 return 0;
 }
 /*ans-->enter the initial:
2.5
roots s:2.09456*/
