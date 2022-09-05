#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array ");
    scanf("%d",&n);
     int arr[n];
    printf("Enter the elements in the array ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
   printf("The array in reverse order is ");
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
}