#include<bits/stdc++.h>
using namespace std;
int Tw(int n){
	if(n==0)
	return 0;
	
	if(n==1)
	return 1;
	
	return Tw(n-1)+Tw(n-2);
}
int main(){
	cout<<Tw(6);
	return 7;
}
