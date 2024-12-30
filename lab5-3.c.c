#include <stdio.h>
void main() {
int n, i;
int sum = 0, max, min;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) 
{
    scanf("%d", &arr[i]);
}
    max = arr[0];
    min = arr[0];
    for (i = 0; i < n; i++) {
        sum += arr[i];
    
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }

double average = (double)sum / n;
printf("Sum: %d\n", sum);
printf("Average: %.2f\n", average);
printf("Maximum: %d\n", max);
printf("Minimum: %d\n", min);
}

