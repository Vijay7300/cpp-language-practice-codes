 #include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,m;
	cin>>n>>k;
	int sum=0;
	for(int i=1;i<k;i++)
      {
		 sum+=n%10;
		n/=10;
	}
	 m=n%10;
	cout<<"print the program the  k digit from last = "<<m;
	return 0;
}
