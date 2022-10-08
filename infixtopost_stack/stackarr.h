#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 100
int stack[MAX];
char infix[MAX];
char postfix[MAX];


int top=-1;
void push(int x)
{
    if(top== MAX -1) {
        printf( "Error: stack overflow\n") ;
        return;
    }
    top++;
    stack[top]=x;  
}

int pop(){
    int val;
    if (top==-1)
    {
        /* code */
        printf("no element");
        return 0;
    }
    val=stack[top];
    top--;
    return val;
}


void print(){
    for (int i = 0; i <= top; i++)
    {
        /* code */
        printf("%c ",postfix[i]);
    }
    printf("\n");
    
}


int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}