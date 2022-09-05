#include <stdio.h>
int main()
{
    int i, n, num, pos, a[100];
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter the value of the elements");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the array is\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\n ", a[i]);
    }
    printf("Enter the position to be inserted");
    scanf("%d", &pos);
    printf("Enter the element to be inserted");
    scanf("%d", &num);
    for (i = n - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];
    a[pos - 1] = num;
    printf("Final array is ");
    for (i = 0; i <= n; i++)
        printf("%d\n", a[i]);
}