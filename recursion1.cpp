#include<bits/stdc++.h>
using namespace std;
int f(int n,int k){
	int static t=(n>k)?k+1:n+1; //single time read this line //
	t=t-1;
	if(n%t==0&&k%t==0)
     	return t;
		 return f(n,k);
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<f(n,k);
	return 0;
}
