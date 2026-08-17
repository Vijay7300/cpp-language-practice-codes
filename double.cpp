#include<bits/stdc++.h>
using namespace std;
void lst(int x,int*y){
 int p,q;
 p=x%10;
 *y=p;
}
int main(){
int a,b;
cin>>a;
 lst(a,&b);
 cout<<"last digit.="<<b<<endl;
return 0;
}
