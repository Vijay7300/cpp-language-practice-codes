#include<iostream>
using namespace std;
int fd(int n){
	if(n/10)  //3462//-->3
		return fd(n/10);
	else
		return (n);
}
int main(){
	int n;
	cin>>n;
	cout<<fd(n);
	return 7;
}
