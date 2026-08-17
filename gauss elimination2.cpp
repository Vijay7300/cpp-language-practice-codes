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
	x[n]=a[n][n+1]/a[n][n];
	for(int i=n-1;i>=1;i--){
    float sum=0;
    for(int j=i+1;j<=n;j++){
    sum=sum+a[i][j]*x[j];
    }
    x[i]=(a[i][n+1]-sum)/a[i][i];
    }
    cout<<"the solution is"<<endl;
    for(int i=1;i<=n;i++)
    cout<<x[i]<<endl;
    return 0;
}
/*enter the size of square matrix
3
2 1 1 10
3 2 3 18
1 4 9 16
upper triangular matrix is
2 1 1 10
0 0.5 1.5 3
0 0 -2 -10
the solution is
7
-9
5   */
/*
enter the size of square matrix
3
1 2 -4 2 7 6 -2 -5 0 -3 -5 -8
upper triangular matrix is
1 2 -4 2
0 -8 26 -19
0 0 -14.75 -0.875
the solution is
-2.89831
2.5678
0.059322
*/
