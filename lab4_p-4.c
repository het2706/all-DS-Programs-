#include<stdio.h>
void main()
{
    int a,b,i;
    printf("enter the first and second number");
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a; i<=b; i++)
    {
        if(i%2==0 && i%4!=0)
        {
            printf("%d",i);
        }
    }
}