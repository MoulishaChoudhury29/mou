#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,a,x=0;
	printf("Enter the no. ");
	scanf("%d", &n);
	m=n;
	while(n>0)
	{
		a=n%10;
		x=x+pow(a,3);
		n=n/10;
	}
	if(m==x)
	printf("Armstrong number");
	else
	printf("Not armstrong number");
}
