#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
struct node *head;
void create(int n);
void display();
void insert(int data);
void delete();
void insertNodeAtMiddle(int data, int position);
void choice();
void deleteMiddleNode(int pos);

void choice()
{
    
    int c, data,con,position,pos;
    printf("Choice 1 : Insert\n");
    printf("Choice 2 : delete\n");
    printf("Choice 3 : inser in the middle\n");
    printf("Choice 4 : delete in the middle\n");
    printf("Enter your choice");
    scanf("%d", &c);
    if(c ==1)
    {
      
       
        printf("Enter the element to be inserted at the start of the node");
       insert(data);
       printf("The new list is \n");
       display();
       printf("Do you want to continue ?");
       scanf("%d", &con);
       if(con==1)
       choice();
       else
       {
       printf("Finished");
       
       }
    }
    
    if(c ==2)
    {
        printf("Enter the elemenent to be delted ");
        delete();
        printf("The final linked list is \n");
        display();
        printf("Do you want to continue ");
        scanf("%d", &con);
        if(con==1)
       choice();
       else
       printf("Finished");
       
        
    }
    if(c==3)
    {
        
        printf("Enter the data to be inserted ");
   scanf("%d", &data);
    printf("Enter the position to be inserted ");
      scanf("%d", &position); 
        insertNodeAtMiddle( data, position);
        printf("The final linked list is ");
        display();
        printf("Do you want to continue ");
        scanf("%d", &con);
       if(con==1)
       choice();
       else
       printf("Finished");
       
    }
if(c==4)
{
   

    printf("Enter the position to be deleted ");
    scanf("%d", &pos);

     deleteMiddleNode(pos);
     printf("The final linked list is ");
     display();
     printf("Do you want to continue ");
     scanf("%d", con);
     if(con==1)
     choice();
     else
     printf("Finished");
}
}




int main()
{
    int n, data;
    printf("Enter the number of nodes ");
    scanf("%d", &n);
    create(n);
    display();
    choice();
   
    return 0;
}

void create(int n)
{
    struct node *new , *temp;
    int data , i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("No memory allocated");
    }
    else
    {
        printf("Enter the data of the first node");
        scanf("%d", &data);
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2; i<=n; i++)
        {
            new = (struct node*)malloc(sizeof(struct node));
            if(new==NULL)
            {
                printf("The list is finished");
                
            }
            else
            {
                printf("Enter the valus of the node %d : ", i);
                scanf("%d", &data);
                new->data=data;
                new->next=NULL;
                temp->next=new;
                temp=temp->next;
            }
        }
        
    }
}

void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\n", temp->data);
            temp=temp->next;
        }
    }
}

void insert(int data)
{
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("No memory allocated");
    }
        else
        {
        scanf("%d", &data);
        new->data=data;
        new->next=head;
        head=new;
        }
    
}

void delete()
{
    struct node *del;
    if(head==NULL)
    {
        printf("The list is already empty");
        
    }
    else
    {
        del=head;
        head=head->next;
        printf("data deleted %d\n ", del->data);
        free(del);
    }
}

void insertNodeAtMiddle(int data, int position)
{
    int i;
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link data part
        newNode->next = NULL;

        temp = head;

        /* 
         * Traverse to the n-1 position 
         */
        for(i=2; i<=position-1; i++)
        {
            temp = temp->next;

            if(temp == NULL)
                break;
        }

        if(temp != NULL)
        {
            /* Link address part of new node */
            newNode->next = temp->next; 

            /* Link address part of n-1 node */
            temp->next = newNode;

            printf("DATA INSERTED SUCCESSFULLY\n");
        }
        else
        {
            printf("UNABLE TO INSERT DATA AT THE GIVEN POSITION\n");
        }
    }
}

void deleteMiddleNode(int pos)
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=pos; i++)
        {
            prevNode = toDelete;
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            
            free(toDelete);

            printf("SUCCESSFULLY DELETED NODE FROM MIDDLE OF LIST\n");
        }
        else
        {
            printf("Invalid position unable to delete.");
        }
    }
}