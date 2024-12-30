#include<stdio.h>
void main()
{
	int n;
	int sum=0;
	int i=1;
	int total;
	int sub;
	scanf("%d",&n);
	do
	{
		if(i%2!=0)
		{
			sum+=i;
			printf("%d+",i);
		}
		else
		{
			sub-=i;
			printf("%d+",i);
		}
		i++;
	}
	while(i<=n);
	total=sum+sub;
	printf("=%d",total);

}
