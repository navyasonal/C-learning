#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number of elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    int e,pos;
    printf("Enter the element to be inserted ");
    scanf("%d",&e);
    printf("Enter the position of the element ");
    scanf("%d",&pos);

    int newarr[n+1];
    for(int i=0;i<n+1;i++)
    {
        if(i<pos)
        newarr[i]=a[i];
        if(i==pos)
        {
            newarr[pos]=e;
        }
        if(i>pos)
        newarr[i+1]=a[i];
    }
    printf("The elements in the array are: ");
    for(int i = 0; i <n+1; i++)
    {
        printf("%d ",newarr[i]);
    }
    return 0;
}