#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,x=0,x2=0,y=0,y2=0,xy=0;
	cin>>n;
  int  a[n];
  int  b[n];
		for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		x+=a[i];
	}
	for(int i=0;i<n;i++){
		x2+=a[i]*a[i];
	}
float Ex=float(x)/n;
float sdx=sqrt((x2/n)-(Ex*Ex));

for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		y+=b[i];
	}
	for(int i=0;i<n;i++){
		y2+=b[i]*b[i];
	}
float Ey=float(y)/n;
float sdy=sqrt((y2/n)-(Ey*Ey));

for(int i=0;i<n;i++){
		xy+=a[i]*b[i];
	}
	float Exy= float(xy)/n;
	float r=(Exy-Ex*Ey)/(sdx*sdy);
	cout<<"mean-x: "<<Ex<<"\n"<<"standard devition-x: "<<sdx<<"\n";
	cout<<"mean-y: "<<Ey<<"\n"<<"standard devition-y: "<<sdy<<"\n";
	cout<<"correltion: "<<r;
	return 0;
	
}     /* 9
1 2 3 4 5 6 7 8 9
9 8 10 12 11 13 14 16 15
mean-x: 5
standard devition-x: 2.44949
mean-y: 12
standard devition-y: 2.44949
correltion: 1.05556  */
