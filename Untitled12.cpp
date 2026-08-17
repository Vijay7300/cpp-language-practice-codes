 #include<bits/stdc++.h>
using namespace std;
int main(){
	int  x;
	cin>>x;
  while(x<108)
{if(x>30)
x=x+11;
else
if(x<70)
x=x+2;
x=x+10;
   cout<<"x="<<x<<"  ";
}
	return 0;
}
