#include<iostream>
using namespace std;

int f_r(int bin)
{
	if (bin == 0)
		return 0;
	else
		return f_r(bin/10)*2 + bin%10;
}

int f(int bin)
{
	int dec=0,p=1;
	
	while(bin)
	{
		dec += bin%10 * p;
		p *= 2;
		bin /= 10;
	}
	
	return dec;
}


int main(){
	int n;
	cin>>n;
	
	cout << f(n) << endl << f_r(n);
	return 7;
}










