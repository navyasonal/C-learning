#include<stdio.h>
int main()
{
    int i, n, a[100];
    printf("\nEnter the number of elemnets\n");
    scanf("%d", &n);
    printf("\nEnter the value of the elements\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nsThe elments in array divisible by 7 are\n");
    for(i=0; i<n; i++)
    {
        if(a[i]%7==0)
        printf("%d\n",a[i]);
    }
}