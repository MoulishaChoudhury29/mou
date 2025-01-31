#include <stdio.h>
int main ()
{
	int a,b;
	printf("enter two nos.");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("the greatest no is %d",a);
	}
	else 
	{
		printf("the greatest no is %b",b);
	}
}