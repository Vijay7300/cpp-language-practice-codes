#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>100){
		n=n/10;
	}
	cout<<"print the program the second digit from first = "<<n%10;
	return 0;
}
