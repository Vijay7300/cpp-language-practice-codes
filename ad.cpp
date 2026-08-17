#include<iostream>
using namespace std;
void rm(float a[][10],int m,int n){
	int i,j;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
}
void ad_matrix(float a[][10],float b[][10],int m,int n,float c[][10]){
	int i,j;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	c[i][j]=a[i][j]+b[i][j];
}
void wm(float a[][10],int m,int n){
	int i,j;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	cout<<a[i][j]<<" ";
	cout<<endl;
}
int main(){
	int m,n;
	cin>>m>>n;
	float a[10][10],b[10][10],c[10][10];
	rm(a,m,n);
	rm(b,m,n);
	add_matrix(a,b,m,n,c);
	return 0;
}
