#include<stdio.h>
void main()
{
	
	int i=1;
	printf("number is \n");
	do
	{	if (i%2==0 && i%4!=0)
		{
			printf("%d\n",i);
		}
		
		i++;
	}
	while(i<=10);
	
}
