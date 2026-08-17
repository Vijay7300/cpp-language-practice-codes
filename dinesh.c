#include<stdio.h>
#include<math.h>
int main(){
	int x,b=0,i=2;
	printf("enter the number :");
	scanf("%d",&x);
	for(i=2;i<=x;i++)
	{
	if(x%i==0)
	printf("the %d\n",i);}
//	printf("the numbers of factors : %d",b);
}
