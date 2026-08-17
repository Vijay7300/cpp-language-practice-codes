#include<bits/stdc++.h>
using namespace std;

int sed(int n){
	if(n)
	return sed(n/10)+n%10*!(n%2);
	else 
	return 0;
}
int main(){
	int n;
	cin>>n;
	cout<<sed(n);
	return 0;
}
