#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,c,d;
	int l = 30;
	
	for (a=1;a<=l;a++)
		for (b=1;b<=l;b++)
			for (c=1;c<=l;c++)
				for (d=1;d<=l;d++)
					if ( a*a*a + b*b*b == c*c*c + d*d*d  )
						cout << a*a*a + b*b*b << endl;
					
	return 7; 
}
