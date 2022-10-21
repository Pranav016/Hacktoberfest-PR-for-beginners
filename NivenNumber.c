#include<stdio.h>

int main() 
{
     int num,sum=0,temp,rem;
     scanf("%d", &num);
     temp=num;
     while(temp > 0){    
        rem = num%10;    
        sum += rem;    
        temp = temp/10;    
    }    
     if(num%sum==0)
        printf("niven number");
     else
        printf("not niven number");
} 
