#include <stdio.h>
#include <stdlib.h>

void delete(int a[],int n)
{
    int e,pos;
    printf("Enter the element to be deleted ");
    scanf("%d",&e);

    for(int i=0;i<n;i++)
    {
        if(e==a[i])
        pos=i;
        else
        pos=-1;
    }
    if(pos==-1)
    {
        printf("Element not found ");
        exit(0);
    }
    int newarr[n+1];
    for(int i=0;i<n+1;i++)
    {
        if(i<pos)
        newarr[i]=a[i];
        if(i==pos)
        {
            continue;
        }
        if(i>pos)
        newarr[i-1]=a[i];
    }
    printf("The elements in the array are: ");
    for(int i = 0; i <n-1; i++)
    {
        printf("%d ",newarr[i]);
    }
}
int main()
{
    int n=0;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for(int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    delete(arr,n);
    return 0;
}