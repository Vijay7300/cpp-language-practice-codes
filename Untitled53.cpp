#include<iostream>
using namespace std;
int f(int n){int sum=0;
   if(n!=0){
	sum+=f(n/100)+n%10;}
	return sum;

}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
	return 0;
}
