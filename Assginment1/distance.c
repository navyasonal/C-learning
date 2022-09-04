#include <stdio.h>
#include <stdlib.h>

int search(int c1, int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == c1)
            return i;
    }
    return 0;
}

int distancebtw(int x, int y, int a[], int n)
{
    int i = search(x, a, n);
    int j = search(y, a, n);
    int mindis=abs(i-j);
    return mindis;
}

int main()
{
    int n;
    printf("enter the number of elements ");
    scanf("%d", &n);
    int numlist[n];
    printf("Enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numlist[i]);
    }

    int a, b;
    printf("enter two numbers ");
    scanf("%d", &a);
    scanf("%d", &b);

    int ans=0;
    ans = distancebtw(a,b,numlist,n);
    printf("%d",ans);

}