#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp, *newnode;

void input_node(struct node *head, int size)
{
  printf("enter the elements of the node\n");
  scanf("%d",&head->data);
  head -> next = NULL;
  temp = head;
  
  for(int i=1; i<size; i++)
  {
     newnode = (struct node *)malloc(sizeof(struct node *));
     scanf("%d", &newnode->data);
     newnode->next = NULL;
     temp->next = newnode;
     temp = temp->next;
  }
}  
 
 
void display (struct node *head, int size)
{
    temp = head;
    for(int i=0; i<size; i++)
    {
        printf("%d -> ", temp->data);
        temp =  temp->next;
    }
    printf("NULL\n");
}

void insert_at_beginning(struct node *head)
{
    
    
    struct node *freshnode;
    freshnode = (struct node *)malloc(sizeof(struct node *));
    if(freshnode == NULL)
    printf("memory not allocated\n");
    else
    {
        printf("enter data you want to input\n");
        scanf("%d",&freshnode->data);
        freshnode->next = head;
        head = freshnode;
    }
   temp = head;
   while(temp!= NULL)
   {
       printf("%d ->", temp->data);
       temp = temp->next;     
   }
   printf("NULL\n");
}


int main()
{
    int size, option, cont = 1;
    head = (struct node *)malloc(sizeof(struct node *));
    while(cont != 0)
 {
    printf("choose between the two options\n 1. for creation of node\n 2. for display of node\n 3. for inserting at beginning\n");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        printf("enter the size of the node\n");
        scanf("%d", &size);
        input_node(head, size);
        break;
        
        case 2:
        display(head, size);
        break;
        
        case 3:
        insert_at_beginning(head);
        break;
        
    }
        printf("1 to contiue and 0 to exit\n");
        scanf("%d",&cont);
 }
        return 0;
}




