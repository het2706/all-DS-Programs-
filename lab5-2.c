#include<stdio.h>
void main()
{
int n;
printf("enter size of arry");
scanf("%d",&n);
int a[n],i;
for(i=0;i<n;i++)
{	
	printf("enter number=");
	scanf("%d",&a[i]);
}
for(i=n;i>=0;i--)
{
	printf("%d\n",a[i]);
}
	
}
