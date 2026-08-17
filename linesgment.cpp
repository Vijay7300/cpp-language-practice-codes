#include<bits/stdc++.h>
using namespace std;
typedef struct {
   float x,y,z;
  } point;
  
  float unitvector(point a)
{ point c; float s,p,d;
c.x=(a.x * a.x);
c.y=(a.y * a.y);
c.z=(a.z * a.z);
s=c.x/(c.x+c.y+c.z);
p=c.y/(c.x+c.y+c.z);
d=c.z/(c.x+c.y+c.z);
return ;
}
int main(){int sum=0;
	float ans;point c,p1,p2;
	cin>>p1.x>>p1.y>>p1.z;
	ans=unitvector(p1);
	cout<<"unitvector= "<<ans.x<<"i"<<" "<< ans.y<<"j"<<" "<<ans.z<<"k";
	return 0;
}
