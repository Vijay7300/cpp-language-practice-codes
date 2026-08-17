#include<bits/stdc++.h>
using namespace std;
int nd(int n){
	int ld,nod=0;
while(n>0){ ld=n%10;
	   nod++;
	   n/=10;
	}
	return nod;
}
int main(){
	int n;
	cin>>n;
	cout<<nd(n);
	return 7;
}
