#include<iostream>
using namespace std;
int main(){
  int a[]={1,2,5,7};
  for(int i=0;i<4;i++)
	cout<<*(a+i)<<"\n";  // 1 2 5 7 //
	
	return 0;
}
