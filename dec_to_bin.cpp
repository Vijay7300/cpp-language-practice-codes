#include<iostream>
using namespace std;


int f_r(int dec)
{
	if (dec == 0)
		return 0;
	else
		return f_r(dec/2)*10 + dec%2;
}


int f(int dec)
{
	int bin=0,p=1;
	
	while(dec)
	{
		bin += (dec%2)*p;
		p *= 10;
		dec /= 2;
	}
	return bin;
}

int main()
{
	int n;
	cin >> n;
	cout << f(n) << endl << f_r(n);
	return 7;
}
