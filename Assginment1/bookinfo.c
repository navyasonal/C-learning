#include <stdio.h>
#include <string.h>
struct book
{
    int bookno;
    char title[30];
    int price;
};

void maxprice(struct book v[], int n)
{

    int i;
    int c=0;
    int max=v[0].price;
    for (i = 0; i < n; i++)
    {

        if (max < v[i].price){

            max = v[i].price;
            c=i;
        }
    }
    printf("\nThe book with the highest price is:  %s\n", v[c].title);
    printf("The book details are :\n");
    printf("The book number is %d\n", v[c].bookno);
    printf("the book name is %s\n", v[c].title);
    printf("The book price is %d\n", v[c].price);
}

void main()
{

    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct book bk[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of the book:");
        printf("\nBook number: ");
        scanf("%d", &bk[i].bookno);
        printf("Book title: ");
        scanf("%s", bk[i].title);
        printf("Book Price: ");
        scanf("%d", &bk[i].price);

    }
    maxprice(bk,n);
}
