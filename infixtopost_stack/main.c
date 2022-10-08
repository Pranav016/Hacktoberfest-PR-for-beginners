#include<stdio.h> 
#include<stdlib.h>
#include "infixtopost.h"
#include "stackarr.h"
int main() { 
    int result;
    printf("Enter Infix expression:");
    gets(infix);
    inToPost();
    result=post_eval();
    print();
    printf("%d",result);

    return 0;
    
}