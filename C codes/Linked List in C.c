#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
   char model[10],color[10];
   int year;
   struct node *next;
};
struct node *temp,*head;
void display(struct node *head){
   temp=head;
   while(temp!=NULL){
      if(temp->year>2010 && (strcmp("yellow",temp->color)==0))
      printf(" %s \t\t %s \t\t %d",temp->model,temp->color,temp->year);
      temp=temp->next;
      printf("\n");
   }
}
int main(){
   int n;
   char option,enter;
   head=(struct node *)malloc(sizeof(struct node));
   temp=head;
   do{
      printf("\nenter car model: ");
      scanf("%s",temp->model);
      printf("enter car color: ");
      scanf("%s",temp->color);
      printf("enter car year: ");
      scanf("%d",&temp->year);
      printf("\nDo you want continue Y(es) | N(o) : ");
      scanf("%c",&enter);
      scanf("%c",&option);
      if (option!='N'){
         temp->next=(struct node *)malloc(sizeof(struct node));
         temp=temp->next;
      } else {
         temp->next=NULL;
      }
   }while(option!='N');
   display(head);
   return 0;
}