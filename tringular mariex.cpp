#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"enter the size of square matrix"<<endl;
	cin>>n;
	float a[n][n+1],x[10];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n+1;j++)
	cin>>a[i][j];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(i>j){
		float c=a[i][j]/a[j][j];
		for(int k=1;k<=n+1;k++)
		a[i][k]=a[i][k]-c*a[j][k];
	}
	cout<<"upper triangular matrix is"<<endl;
	for(int i=1;i<=n;i++){
	for(int j=1;j<=n+1;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
    }
}
