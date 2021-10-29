#include<iostream>
using namespace std;
void reArrange(int Arr[],int n){
    int j=0;
    for(int i=0;i<n;i++)
    {if(Arr[i]<0)
     {if(i!=j)
      swap(Arr[i],Arr[j]);
    j++;
     }
    }
}
void printArray(int Arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",Arr[i]);
    }
}
int main()
{
    int arr[]={-1,3,4,-8,10};
    reArrange(arr,5);
    printArray(arr,5);
    return 0;
}
