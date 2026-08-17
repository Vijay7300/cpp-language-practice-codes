#include<iostream>
using namespace std;
int main(){
	int n,m,p;
	cin>>n>>m>>p;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			for(int k=1;k<=p;k++){ 
		      if(i==3&&j==3&&k==3)
		      goto out;
		      else
		      cout<<i<<" "<<j<<" "<<k<<"    ";
		}cout<<endl;
	}
}
out:
	cout<<"out of the loops";
	return 0;
}
