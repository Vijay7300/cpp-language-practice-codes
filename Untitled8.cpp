#include<stdio.h>
 
 int main(){
 	int n;
 	int x=1; 
	 int y=0;
	 int z=0;
	 while(n>=0){
	 	x=y;
	 	y=z;
	 	z=x+y;
	 	printf("%d",z);
	 }
 	return 0;
 }
 
