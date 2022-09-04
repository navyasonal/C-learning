
#include <stdio.h>

void printArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int a[], int s)
{
    for (int step = 1; step < s; step++)
    {
        int key = a[step];
        int j = step - 1;

        while (key < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
}

// Driver code
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
    insertionSort(arr, n);
    printf("Sorted array in ascending order:\n");
    printArray(arr, n);
}