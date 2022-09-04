#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void linkedlistprint(struct Node *ptr)
{
    while(ptr!=NULL){
    printf("%d\n", ptr->data);
    ptr=ptr->next;
    }
}

int main()
{
    // allocate memory for nodes in the heap
    struct Node *head=(struct Node *)malloc(sizeof (struct Node));
    struct Node *second=(struct Node *)malloc(sizeof (struct Node));
    struct Node *third=(struct Node *)malloc(sizeof (struct Node)); 

    //linking first and second node
    head-> data=7;
    head ->next=second;

    second-> data=8;
    second->next=third;

    third -> data =10;
    third -> next=NULL;
    linkedlistprint(head);
    return 0;
}