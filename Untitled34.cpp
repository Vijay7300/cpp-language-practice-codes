#include<iostream>
using namespace std;
int main(){
    int n,i=1,fact=1;
    cin>>n;
    do{fact*=i;
    	i++;
}while(n>=i);
cout<<"the  factorial. = "<<fact; 
 return 0;
}
