#include<bits/stdc++.h>
using namespace std;
int f(int n,int *b){
	int p,q,a;
	if(n<10)
	return n;
	else {
		a=f(n%10,&p);
	return f(n/10,&q);}
	//cout<<"ld="<<a;
}
/*int g(int n,int *a){ int p;
  int static k=-1;
  k=k+1;
	if(n<100)
	return ((n/10)*pow(10,k));
	else return (n%10)*pow(10,k)+g(n/10,&p);
}*/
int main(){
	int n,c,a;
    cin>>n;
	cout<<"fd="<<f(n,&c)<<"\n";
		cout<<"dsd="<<a;
		return 0;
}


