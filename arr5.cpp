#include<iostream>
using namespace std;
int main(){
int n,sum=1,y;
cout<<"the size of array"<<endl;
cin>>n;
cout<<"enter the element of array"<<endl;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"value of the k"<<endl;
cin>>y;
for(int i=0;i<n;i++){
y=arr[y-1];
cout<<y<<",";
}
return 0;
}

