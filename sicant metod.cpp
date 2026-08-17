#include<bits/stdc++.h>
#define f(x) (x*x*x+x*x-1)
#define E 0.01
using namespace std;
 int main(){
 	float x0,x1,x2,f1,f2,f0,i=0;
 	cout<<"enter the initial:"<<endl;
 	cin>>x0>>x1;
 	do{ 
	 f1=f(x1);
 	 f0=f(x0);
 	 x2=((x0*f1)-(x1*f0))/(f1-f0);
 	 f2=f(x2);
 	 f0=f1;
 	 f1=f2;
 	 x0=x1;
 	 x1=x2;
 	 i++;
 	 cout<<"no.of iteration:"<<i<<"\n"<<endl;
 	 cout<<"roots s:"<<x2<<"\n"<<endl;
 	 }while(abs(f2)>E);
 	 
 	 cout<<"value of function:"<<f2<<"\n"<<endl;
	 return 0;
 }
 /*enter the initial:
0
1
no.of iteration:5

roots s:0.75485

value of function:-9.03606e-005  */
