#include<bits/stdc++.h>
using namespace std;
int P(int n, int *a){int p;
	if(n<10){
	*a=n;
	return n;}
	else {
		p=P(n/10,&p)+n%10;
		
	}
	*a=p;
	cout<<*a;
}
	
int main(){
	int n,a,b;
	cin>>n;
	P(n,&a);
	
	return 0;
}
