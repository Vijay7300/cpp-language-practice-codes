#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,t=0,p=1;
	cin>>n;
	while(n>10){k=n%10;
 	t+=p*k;
	p*=10;
	n/=10;
	}
	cout<<t;
	return 0;
}
