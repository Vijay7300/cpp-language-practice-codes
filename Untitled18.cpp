 #include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	int i=1;
   while(n>=i){
	 if(i%2==0){
	 	sum=sum+i;
	 	i++;
	}
	
}
	cout<<"print the first digit= "<<sum;
	return 0;
}
