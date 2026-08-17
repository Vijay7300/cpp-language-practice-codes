#include<bits/stdc++.h>
#define f(x) (x*x*x-x+1)
#define e 0.01
using namespace std;
int main(){
	float x0,x1,x2,y0,y1,y2;
	cout<<"input two initial roots and tolerance value:\n";
	cin>>x0>>x1;
	y0=f(x0);
	y1=f(x1);
	if(y0*y1>0)
	cout<<"initial roots are unsuitable:\n";
	else{
		x2=(x0+x1)/2;
		y2=f(x2);
		while(fabs(y2)>e){
			x2=(x0+x1)/2;
		y2=f(x2);
			if(y0*y1>0){
				x0=x2;
				y0=y2;
			}else{
				x1=x2;y1=y2;
			}
		}
		cout<<"roots of eq. is \n";
		cout<<x2;
	}
	return 0;
}
