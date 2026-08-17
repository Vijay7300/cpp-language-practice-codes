#include<iostream>
using namespace std;
int main(){
    int x,k,ld,i,sum=0;
    cin>>x>>k;
    for (i=1;i<k;i++){ sum+=x%10;
    x=x/10;
   }ld=x%10;
cout<<" program to print the kth digit from last= "<<ld; 
 return 0;
}
