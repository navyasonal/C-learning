#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int num;
    struct node *nextptr;

}* stnode;
void swap(struct node *a, struct node *b) ;
void create(int n)
{
    struct node *fnode, *tmp;
    int num;
    stnode  = (struct node*)malloc(sizeof(struct node));  // head node

    num = rand() % 100 + 1;

    stnode->num=num;
    stnode->nextptr=NULL;

    //head node in temprorary
    tmp=stnode;  //temperary struct node type pointer

    for(int i=2;i<=n;i++)
    {
        fnode=(struct node*)malloc(sizeof(struct node));
        if(fnode==NULL){
        printf("Memory cannot be allocated");
        break;
        }
    
    else
    {
    num = rand() % 100 + 1;

    fnode->num=num;
    fnode->nextptr=NULL;

    tmp->nextptr=fnode;  //for first iteration temp node would be head node
    tmp=tmp->nextptr;

   
     } } }
void bubbleSort(struct node *start) 
{ 
    int swapped, i; 
    struct node *ptr1; 
    struct node *lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->nextptr != lptr) 
        { 
            if (ptr1->num > ptr1->nextptr->num) 
            { 
                swap(ptr1, ptr1->nextptr); 
                swapped = 1; 
            } 
            ptr1 = ptr1->nextptr; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
} 
  
/* function to swap data of two nodes a and b*/
void swap(struct node *a, struct node *b) 
{ 
    int temp = a->num; 
    a->num = b->num; 
    b->num = temp; 
} 

void display()
{
    struct node*tmp;
    if(stnode==NULL)
    printf("List is empty");
    else{
        tmp=stnode;
        while(tmp!=NULL)
        {
            printf("Data= %d\n",tmp->num);
            tmp=tmp->nextptr;
        }
    }
}
int main()
{
    int n,data;
    printf("Input the number of nodes ");
    scanf("%d",&n);
    create(n);
    printf("The values in nodes are \n");
    display();
    bubbleSort(stnode);
    printf("The values in nodes are \n");
    display();
    return 0;
}


