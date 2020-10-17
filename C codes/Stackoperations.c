#include<stdio.h>
void main()
{   int top=-1,i,n,a[50],ch,data,p;
    printf("\nEnter the number of elements in stack");
    scanf("%d",&n);
    do
    {   printf("\nMenu\n");
        printf("\n1.Push\n2.Pop\n3.Peep\n4.Is empty\n5.Is full\n6.Display\n7.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        if(ch==1)
        {   if(top==n-1)
            printf("\nStack Overflow");
            else
            {top++;
            printf("\nEnter the value to be added:");
            scanf("%d",&data);
            a[top]=data;}  }
        else if(ch==2)
        {   if(top==-1)
                printf("\n Stack Underflow");
            else
            {   p=a[top];
                top--;
                printf("Popped elements=%d",p);}   
        }   
        else if(ch==3)
        {if(top==-1)
            printf("\nStack underflow");
            else{
            printf("\nTop most element:%d",a[top]);}
        }
        else if(ch==4)
        {   if(top==-1)
                printf("\nStack is empty");
            else
                printf("\nStack is not empty");
        }
        else if(ch==5)
        {   if(top==n-1)
                printf("\nStack is full");
            else
                printf("\nStack is not full");
        }
        else if(ch==6)
        {   if(top==-1) 
                printf("\nStack Underflow");
            else
            {   printf("\nOutput Stack:\n");
                for(i=0;i<=top;i++)
                printf("\t%d",a[i]);}
        }
    }while(ch<7); 
}
