#include<stdio.h>
int main()
{
	int n,m,i=0;
	printf("Enter the no. ");
	scanf("%d", &n);
	while(n>0)
	{
		i=i+1;
		n=n/10;
	}
	printf("The total no of digit is %d ",i);
}
