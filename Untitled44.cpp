#include<bits/stdc++.h>
using namespace std;

int f(int n){
if(n/10)
return f(n%10);
else
	return n;
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
