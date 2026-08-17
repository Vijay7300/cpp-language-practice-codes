#include<iostream>
using namespace std;
int main(){
	float n,sum=0;
	cin>>n;
	float p=1-1/n;
	float t=0.5*p;
	for(int i=2;i<=7;i++){
		t=t*p;
		sum+=t;
	}cout<<sum+p;
	return 0;
}

