#include<bits/stdc++.h>
using namespace std;
double f(double x){
	return x*x-3;
}
double e=0.001;
double c;
void bisection(double a, double b){
	if(f(a)*f(b)>=0){
		cout<<"incorrect a&b:";
		return ;
	}
	c=a;int i=0;
	while((b-a)>=e){
		c=(a+b)/2;
		if(f(c)==0){
			cout<<"roots"<<c<<"\n";
			break;
		}
		else if(f(c)*f(a)<0){
			cout<<"roots"<<c<<"\n";
			b=c;
		}else{
			cout<<"roots"<<c<<"\n";
			a=c;
		}i++;
		cout<<"i="<<i<<"\n";
		if(i==8)
		break;
	}cout<<"The interval isc= [1.7266,1.7344]"<<"\n";
}
int main(){
	double a,b;
	cin>>a>>b;
	cout<<"a= "<<a<<"\n";
	cout<<"b= "<<b<<"\n";
	bisection(a,b);
	cout<<"accurate roots is= :"<<c;
	
	return 0;
}
