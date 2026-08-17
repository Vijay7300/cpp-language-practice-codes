#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ld,p;
	cin>>n;
	do{ ld=n/10;
	 p=ld%10;
	 break;
	}while(n>0);
	cout<< "product of 2nd digit and the number= "<<n*p;
	return 0;
}
