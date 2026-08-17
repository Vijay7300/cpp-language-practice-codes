#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,mn=9999999;
	cin>>n;
	do{ mn=min(mn,n%10);
	n/=10;
	}while(n>0);
	cout<< "minimum= "<<mn;
	return 0;
}
