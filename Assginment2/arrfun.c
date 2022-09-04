#include <stdio.h>

void display(int a[],int n)
{
    printf("The elements in the array are: ");
    for(int i = 0; i <n; i++)
    {
        printf("%d ",a[i]);
    }
}
void insert(int a[],int n)
{
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
}

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
    int choice;
    printf("Enter the number of your choice \n1 for displaying the array \n2 for inserting an element and \n3 for deleting an element\n");
    scanf("%d",&choice);
    if(choice==1)
    display(arr,n);
    if(choice==2)
    insert(arr,n);
    if(choice==3)
    delete(arr,n);
return 0;

}