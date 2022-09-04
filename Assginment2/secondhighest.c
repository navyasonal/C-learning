#include <stdio.h>

int main()
{
    int n=0;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements ");
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        
    }
    int max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
        
    }

    printf("Second largest element: %d",max2);
    return 0;
    
}