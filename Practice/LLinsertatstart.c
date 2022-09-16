#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *nextptr;

}* stnode;

void create(int n)
{
    struct node *fnode, *tmp;
    int num;
    stnode  = (struct node*)malloc(sizeof(struct node));  // head node

    printf("Input the data for node 1");
    scanf("%d",&num);

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
            printf("Input the data for node %d ",i);
            scanf("%d",&num);

            fnode->num=num;
            fnode->nextptr=NULL;

            tmp->nextptr=fnode;  //for first iteration temp node would be head node
            tmp=tmp->nextptr;

    
     } } }

void insertatstart(){
    int data;
    struct node * new;
    new= (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to be inserted ");
    scanf("%d",&data);
    
    new->num=data;
    new->nextptr=stnode;
    stnode=new;

}
void insertatend(){
    int data;
    struct node *new,*temp;
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the value to be inserted ");
    scanf("%d",&data);

    new->num=data;
    new->nextptr=NULL;
    temp=stnode;

    while(temp!=NULL && temp->nextptr!=NULL){
        temp=temp->nextptr;

    }
    temp->nextptr=new;
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
    insertatstart();
    insertatend();
    printf("The values in nodes are \n");
    display();
    return 0;
}


