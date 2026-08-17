#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;float c;
	cin>>n;
	cout<<"enter the matriex:\n";
  int  a[n][n+1];
	for(int i=0;i<n;i++){
	for(int j=0;j<n+1;j++){
	cin>>a[i][j];
	}
}
   for(int i=0;i<n;i++){
	  for(int j=0;j<n;j++)
	  if(j>i){
	  	c=a[j][i]/a[i][i];
	  	for(int k=0;k<n+1;k++){
	  		a[j][k]=a[j][k]-c*a[i][k];
		  }
	   }
   }
   cout<<"output the upper trangular matriex:"<<"\n";
    for(int i=0;i<n;i++){
	  for(int j=0;j<n+1;j++){
	cout<<a[i][j]<<" ";}
	cout<<endl;
      }
   }
 
