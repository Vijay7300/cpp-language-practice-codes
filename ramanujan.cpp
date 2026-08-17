#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int limit = 100000,i,n,count;
	
	double c;
	
	for (n=0;n<= limit;n++)
	{
		count = 0;
		for (i=1;i<= pow(n,1/3.0); i++)
		{
			c = n - pow(i,3);
			c = pow(c,1/3.0);
			if ( (int)c == c )
			{
				count++;
				cout << i << ",";
			}
		}
		if (count > 1)
			cout << n << endl;
	}
}
