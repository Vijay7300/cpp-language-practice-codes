#include<bits/stdc++.h>
using namespace std;
int rm(int a[][10],int m, int n){
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){ //martix 1
		cin>>a[i][j];}
}

int ra(int a[][10],int m, int n, int x,int y, float p){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
		a[i][j]=a[x-1][j]-p*a[y-1][j];}
}  
}
int wm(int a[][10],int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){ 
		cout<<a[i][j]<<" ";}
cout<<endl;
}
}
    

int main(){
	  int  m,n,x,y;float p;
	cin>>m>>n>>x>>y>>p;
	int  a[m][10];
	rm(a,m,n);
	ra(a,m,n,x,y,p);
	wm(a,m,n);
	return 0;
	
}
