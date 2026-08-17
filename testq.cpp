/*  #include<iostream>
using namespace std;
int main(){
	int x=0;
	for(int i=0;i<5;i++)
	for(int j=0;j<i;j++){
		switch(i+j-1){
			case -1:
			case 0:
				x=x+1;
				break;
				case 1:
				case 2:
			case 3:
				x=x+2;
				break;
				default:
				x=x+3;
			}cout<<x<" ";
	}cout<<"\n"<<x;
	return 0;
} 
#include<iostream>
using namespace std;
void f(int z[3][4]);

 int main(){
	int r=3,c=4;
	int z[r][c]={1,2,3,4,5,6,7,8,9,10,11,12};
	f(z);
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++){
	cout<<z[i][j]<<" ";}
	cout<<"\n";}
	return 0;
}
 void f(int x[][] ){
	for(int i=0;i<r;i++){
	for(int j=0;j<c;j++)
		if(x[i][j]%2==1)
	     x[i][j];
	}
}*/

#include<iostream>
#include<math.h>
using namespace std;

 int main(){
	int n,sum=0,ans;
	cin>>n;
	int s=n;
	while(n!=0){
		int p=n%10;
		sum+=p;
		n/=10;
	} cout<<sum<<" ";
	
	for(int i=2;i<=s;i++){
		if(s%i==0){
			ans=pow(sum,i);
			break;}
		else i++;
	}
	cout<<ans;
	return 0;
}








