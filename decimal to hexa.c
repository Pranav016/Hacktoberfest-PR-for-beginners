#include<stdio.h>
#include<stdlib.h>
 #define SIZE 10
 #define TRUE 1
 #define FALSE 0
/**********************************************/
 struct stack
 {
     int TOP;
     int Item [SIZE];
 };
/**********************************************/

 struct stack S;

/**********************************************/
 void Initalize(void)
 {
     S.TOP=-1;
 }
 /**********************************************/

int Empty(void)
{
    if(S.TOP==-1)
        return TRUE;
        else
        return FALSE;
}
/**********************************************/
int Push( int x)
{

    if(S.TOP== SIZE-1)
    {
        printf("stack overflow");
    exit (1);
    }
    S.TOP=S.TOP+1;
    S.Item[S.TOP]=x;
}
/**********************************************/

 int Pop()
 {
    int x;
     if(Empty())
    {

     printf("stack underflow");
     exit(1);
    }
     x=S.Item[S.TOP];
     S.TOP=S.TOP-1;
     return x;
 }
 /**********************************************/

  int decimaltohexa(int decimal)
 {
     char hexdecimal[100];
      int r,x;
     Initalize();
     while (decimal!= 0)
     {
       r = decimal % 16;
       if (r< 10)
        Push(48 + r);
         else
        Push(55 + r);
       decimal = decimal / 16;
       }
     while(!Empty())
     {
         x=Pop();
         printf("%c",x);
     }
 }
/**********************************************/

int main()
{
    int x;
    int decimal;
     printf("enter the decimal no");
    scanf("%d",&decimal);
  decimaltohexa(decimal);
    //printf("\n\t%d",x);

}
/**********************************************/




