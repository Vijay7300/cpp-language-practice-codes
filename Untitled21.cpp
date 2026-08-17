 us#include<bits/stdc++.h>
ing namespace std;
int main(){
	int n;
	cin>>n;
	int ld,flag,sum=0;
  while(n>0){
  	ld=n%10;
  	n/=10;
		if(ld%2==0){
			sum+=ld;
		}else
		flag++;
	}
	cout<<sum;
	return 0;
}
