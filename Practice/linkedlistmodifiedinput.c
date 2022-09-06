#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;

} * stnode;
struct node *fnode, *tmp;

void create(int n)
{
    
    int num;
    stnode = (struct node *)malloc(sizeof(struct node)); // head node

    printf("Input the data for node 1");
    scanf("%d", &num);

    stnode->num = num;
    stnode->nextptr = NULL;

    // head node in temprorary
    tmp = stnode; // temperary struct node type pointer

    for (int i = 2; i <= n; i++)
    {
        fnode = (struct node *)malloc(sizeof(struct node));

        printf("Input the data for node %d ", i);
        scanf("%d", &num);

        fnode->num = num;
        fnode->nextptr = NULL;

        tmp->nextptr = fnode; // for first iteration temp node would be head node
        tmp = tmp->nextptr;
    }
}

void insert()
{
    struct node *new= (struct node *)malloc(sizeof(struct node));

    int data;
    printf("Enter the value of new node ");
    scanf("%d",&data);
    new->num=data;
    new->nextptr=stnode;
    stnode=new;

    printf("The values in nodes are \n");
    display();
    
}

void display()
{
    struct node *tmp;

    tmp = stnode;
    while (tmp != NULL)
    {
        printf("Data= %d\n", tmp->num);
        tmp = tmp->nextptr;
    }
}

int main()
{
    int n, data;
    printf("Input the number of nodes ");
    scanf("%d", &n);
    create(n);
    insert();
    
    return 0;
}
