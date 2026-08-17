#include<bits/stdc++.h>
using namespace std;
int sed(int n){
	int ld,sum=0;
	while(n!=0){
	  if(n%2==0)
	  sum+=n%10;
	  n/=10;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	cout<<sed(n);
	return 7;
}
