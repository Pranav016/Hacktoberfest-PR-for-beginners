#include<stdio.h> 
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include "stackarr.h"
#define MAX 100
int stack[MAX];
char infix[MAX];
char postfix[MAX];
int top=-1;

// void push (int); //changed
// int pop(); //changed
// int isempty();
// void inToPost();
// int space(char) ;
// void print();
// int precedence(char) ;
// int post_eval() ;



// int main() { 
//     int result;
//     printf("Enter Infix expression:");
//     gets(infix);
//     inToPost();
//     result=post_eval();
//     print();
//     printf("%d",result);

//     return 0;
    
// }
 
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
    if (top == -1)
    {
        /* code */
        printf("stack overflow\n");
        return 0;
    }
    val=stack[top];
    top=top-1;
    return val;
}


void print(){
    int i=0;
    while(postfix[i])
    {
        printf("%c", postfix[i++]);
    }
    
    printf("\n");
    
}


int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
void inToPost(){
    int i, j=0;
    char symbol;
    char next;
    for(i=0; i<strlen(infix); i++) {
        symbol = infix[i];
        switch(symbol) {    
            case '(':
                push(symbol);
                break;
            case ')':
                while((next=pop()) != '(')
                    postfix[j++] = next;
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            case '^':
                while (!isempty() && precedence(stack[top]) >= precedence(symbol))
                {
                    postfix[j++]=pop();
                }
                push(symbol);
                break;
        default:
            postfix[j++]= symbol;
        }
        

    }
        while (!isempty())
        {
            postfix[j++]=pop();
        }
        postfix[j]='\0';
}

int post_eval(){
    int i;
    int a;
    int b;
    for(i=0; i<strlen(postfix);i++) {
        if( postfix[i]>='0' && postfix[i] <= '9'){
            push(postfix[i]-'0');
        }
        else {
            a= pop();
            b= pop();
            switch(postfix[i]) {
                case '+':
                    push(b+a); break;
                case '-':
                    push(b-a); break;
                case '*':
                    push(b*a); break;
                case '/':
                    push(b/a); break;
                case '^':
                    push(pow(b, a)); break;
            }
        }
    } 
    return pop();

}

int precedence(char symbol){
    switch (symbol)
    {
    case '^':
        return 3;
    case '/':
    case '*':
        return 2;
    case '+':
    case '-':
        return 1;
    default:
        return 0;
    }
}


  

/*
Scan the symbols of the expression from left to right and for each symbol, do the following:
a.
If symbol is an operand
Print that symbol onto the screen.
b.
If symbol is a left parenthesis
Push it on the stack.
C•
If symbol is a right parenthesis
Pop all the operators from the stack upto the first left
parenthesis and store the operators in the postfix array.
Discard the left and right parentheses.
d.
If symbol is an operator
If the precedelce of the operators in the stack are greater than or
equal to the current operator, then
Pop the operators out of the stack and print them onto the
screen, and push the current operator onto the stack.
else
Push the current operator onto the stack.
*/

/*
Evaluate postfix
Scan the symbols of the given postfix expression from left to right and for each
symbol, do the following:
1.
If symbol is an operand
Push it on the stack.
2.
If symbol is an operator
Pop two symbols out of the stack and apply the operator on these
symbols.
Push the result on the stack
3.
After scanning all the symbols of the postfix expression, pop the remaining
symbol out of the stack and print it on the screen. The remaining symbol is
the result obtained after evaluating the postfix expression.
*/