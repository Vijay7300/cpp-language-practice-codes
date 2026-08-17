#include<bits/stdc++.h>
using namespace std;
int f(int x,int *y)
{ int p,q;
if (x<10)
{ *y=x;return x;}
else
   { p=f(x/10,&q);
      *y=q+x%10;
   return p*(x%10);
     }
}
int main(){
	int x,y,p;
	cin>>x;
  	p = f(x,&y);
	cout<<"sum:"<<y<<" ";
	cout<<"product:"<<p;
	return 0;
}
