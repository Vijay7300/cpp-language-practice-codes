#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,i=2,p=0;
	cin>>n>>k;
	while(n>=i){
		if(n%i==0){
			p++;
			if(p==k)
			break;
		}i++;
	}
	cout<<i;
	
	return 7;
}
