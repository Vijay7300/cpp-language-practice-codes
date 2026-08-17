#include<iostream>
using namespace std;
int f(int x){
	int sum=0,l;
	for(;x>0;){
		l=x%10;
		sum=(sum+l)*10;
		x/=10;
	}
	return sum/10;
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
/*ans-- 5
23 100 72 42 23
116  */
