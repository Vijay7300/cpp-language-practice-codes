#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p=0,m;
	cin>>n;
	do{ p+=n/=10;
	m=p%10;
	}while(n>=100);
	cout<< "product of 2nd digit and the number=  "<<m*n;
	return 0;
}
