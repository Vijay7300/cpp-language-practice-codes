
#include<iostream>
using namespace std;
void rm(float a[][10],int m,int n){
	int i,j;
	cout<<"matrix-1: ";
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>a[i][j];
}
void sm(float b[][10],int m,int n){
	int i,j;
	cout<<"matrix-2: ";
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	cin>>b[i][j];
}
void add(float a[][10],float b[][10],int m,int n,float c[][10]){
	int i,j;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
	cout<<endl;
}
int wm(float c[][10],int m,int n){
	int i,j;
	cout<<"matrix-ans: "<<"\n";
	for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
	cout<<c[i][j]<<" ";}
	cout<<endl;
}
}
int main(){
	int m,n;
	cout<<"matrix-size: ";
	cin>>m>>n;
	float a[10][10],b[10][10],c[10][10];
	rm(a,m,n);
	sm(b,m,n);
	add(a,b,m,n,c);
	wm(c,m,n);
	return 0;
}
