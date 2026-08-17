#include<iostream>
using namespace std;

int main()
{
	int n,p=1;
	
	cin>>n;
	
	while( n != 0)
	{
		cout << (n%10)*p << " ";
		n /= 10;
		p *= 10;
	}
	
	
	
	return 7;
}
