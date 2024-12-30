#include<stdio.h>
void main()
{
	int i,n,sum=0,sqr=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sqr=i*i;
		sum+=sqr;
	}
	printf("%d",sum);
}
