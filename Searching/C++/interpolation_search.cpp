#include<iostream>
using namespace std;

int interpolation_search(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high && key>=arr[low] && key<=arr[high]){
        if(low==high){
            if(key==arr[low])
                return low;
            else
                return -1;        
        }
        int pos=low+(key-arr[low]*(double)(high-low)/(arr[high]-arr[low]));
        if(key==arr[pos])
            return pos;
        if(key>arr[pos])
            low=pos+1;
        else 
            high=pos-1;
    }
    return -1;
}
int main(){
    int n,key;
    cout<<"Enter total number of elements:  ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter an element to search: ";
    cin>>key;
    int index=interpolation_search(arr,n,key);
    if(index!=-1)
        cout<<"Element found at index "<<index;
    else
    {
        cout<<"Element not found!!!";
    } 
    return 0;
}