#include <stdio.h>

void delete(int a[],int n)
{
    int pos;
    printf("Enter the position of the element to be deleted ");
    scanf("%d",&pos);

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