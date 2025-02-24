#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("Enter the no. ");
	scanf("%d", &n);
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("The total no of digit is %d ",sum);
}
