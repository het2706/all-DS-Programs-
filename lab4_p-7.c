#include<stdio.h>
void main()
{
	int i,n;
	float sum=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(1.0/i);
	}
	printf("%f",sum);
}
