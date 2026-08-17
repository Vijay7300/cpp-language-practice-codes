#include<iostream>

using namespace std;

int main()
{
	int year,i,d;
	//a:
	//cout<< "Enter year -->";
	//cin >> year;
	
//	if (year < 2001)
//	{
//		cout<< "enter year after 2000";
//		goto a;
//	}
	cout << "hllo\n";
	year = 2001;
	do
	{
		d=1;
	for(i=2001 ; i<year ; i++)
	{
		//d += (year %4 != 0) ? 1 : 2  ;
		d += (i %400 == 0 || (i%4 == 0 && i%100 != 0) ) ? 2 : 1  ;
	}
	d %= 7;
	cout << year << " ";
	switch(d)
	{
		case 0:
			cout << "sun"; break;
		case 1:
			cout << "mon"; break;
		case 2:
			cout << "tues"; break;
		case 3:
			cout << "wednes"; break;
		case 4:
			cout << "thurs"; break;
		case 5:
			cout << "fri"; break;
		case 6:
			cout << "satur"; break;
			
	}
	cout<<"day\n";
	} while( year++ < 2100);
	
	return 7;
}
