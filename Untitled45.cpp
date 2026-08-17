#include<bits/stdc++.h>
using namespace std;

int  f(int n){ int p,m=n,r;
if(n>100){
  p= f(n/100);}
  else
  r=f(m/10);
  return 2*((p%10)*10+r);
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
