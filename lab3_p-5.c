#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	int i=1;
	int sqr=0;
	scanf("%d",&n);
	do
	{
	 sqr=i*i;
	sum+=sqr;
	i++;
	}
	while(i<=n);
	printf("%d\n",sum);
}
