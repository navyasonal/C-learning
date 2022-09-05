#include<stdio.h>
int main()
{
    int i, n;
    printf("\nEnter the number of elements\n");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the value of the elments\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nArray in reverse order is\n");
    for(i=n-1;i>=0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}