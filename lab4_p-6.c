#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
		else if(i%2==0)
		{
			sum-=i;
		}
	}
	printf("%d",sum);
}

