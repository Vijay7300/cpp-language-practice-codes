
#include<iostream>
using namespace std;

int main(){
	int m;
	m=12;
	int *ptr;
	ptr=&m;
	int ptr1;
	ptr1=ptr;
	cout<<&ptr<<" ";
	cout<<**ptr1;
	
	return 0;
}
