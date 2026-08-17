#include<bits/stdc++.h>
using namespace std;
int sft(int n){
	int p;
	while(n>1000){
		n/=10;
	 p=n;
	}
	return (n=n%10)+(p=p/100);
}
int main(){
	int n;
	cin>>n;
	cout<<sft(n);
	return 7;
}
