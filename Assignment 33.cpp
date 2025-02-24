#include<stdio.h>
int main()
{
	int n,a,rev=0,m;
	printf("Enter the no. ");
	scanf("%d", &n);
	m=n;
	while(n>0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	if(m==rev)
	printf("Pallindrome number");
	else
	printf("Not pallindrome number");
}
