 #include<stdio.h>
void main()
{
	int n,i;
    int sum=0,count=0;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n", n);
for (i=0;i<=n;i++) 
{
    scanf("%d", &arr[i]);
    sum=sum+arr[i];
}
avg=sum/(n+1);
for(i=0;i<=n;i++)
{
    if(arr[i]>avg)
    {
      	count++;
	}

}
printf("sum of array:%d\n",sum);
printf("avg=%.2f\n",avg);
printf("higher than average of array:%d",count);

}
