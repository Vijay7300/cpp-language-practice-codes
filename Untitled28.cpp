#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,ld;
	cin>>n;
	do{ ld=n%10;
	 n/=10;
	if(ld%2==0){
  	cout<< "print of  even digit= "<<ld<<"  ";	}
	}while(n>0);
	return 0;
}
