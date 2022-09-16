
#include <stdio.h>

void bubbleSort(int array[], int size)
{

    for (int step = 0; step < size - 1; ++step)
    {

        for (int i = 0; i < size - step - 1; ++i)
        {

            if (array[i] > array[i + 1])
            {

                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int n = 0;
    printf("Enter the number of elements in the array");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printf("Sorted Array in Ascending Order:\n");
    printArray(arr, n);
}