#include<iostream>
#include<math.h>
using namespace std;          // something error  //
int main(){
	int n;
	cout<<"enter the size of square matrix"<<endl;
	cin>>n;
	float a[n][n+1],x[10];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n+1;j++)
	cin>>a[i][j];
	
	for(int i=1;i<=n;i++)
	if(a[i][i]==0){
		cout<<"error:";
		exit(0);
	}
	else           //for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	if(i!=j){
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
	cout<<"solution:";
	for(int i=1; i<=n; i++) {
x[i]=a[i][n+1]/a[i][i];          // x[n]=a[n][n+1]/a[n][n];
}
for(int i=1; i<=n; i++) {
cout<<"x"<<i << "="<<x[i]<<" ";
}
return(0);
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
