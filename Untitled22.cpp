#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	
	int ld,sum=0;
	
  	while(n>0&&m>0){
	  	sum +=(n%10)*(m%10);
	  	n/=10;
	  	m/=10;
	
	}
	cout<<sum;
	return 0;
}
