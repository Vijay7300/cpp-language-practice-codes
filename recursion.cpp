#include<bits/stdc++.h>
using namespace std;
int f(int n){
  int static k=-1;
  k=k+1;
  if(n==0)
  return 0;
	if((n%10)%2==0){
		k=k-1;
	return f(n/10);}
	else return (n%10)*pow(10,k)+f(n/10);
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
