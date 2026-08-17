#include<iostream>
using namespace std;
int f(int x){
	int sum=0,l;
	for(;x>10;){
		l=x%10;
		x/=10;
	}
	sum=l*x;
	return sum;
}
int main(){
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	 for(int i=1;i<=n;i++)
	 sum+=f(a[i]);
	 cout<<sum;
	 return 0;
}
/* ans-- 5
127 42 673 2415 23
66  */
