/* 
C Program to Implement Selection Sort 
*/

#include<stdio.h>
#include<stdlib.h>

//function to the swapping of variables
void Swap(int *a,int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

//function to sort using selection sort
void selectionSort(int *arr, int n){
    /* sorting in ascending order */
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            Swap(&arr[i],&arr[min]);
        }
    }
}

//function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


//main function
int main(){
    int *arr;
    int n;
    arr = (int *) malloc(sizeof(int) * n);

    printf("Enter total no. of elements : ");
    scanf("%d", &n);

    printf("\nEnter %d numbers: ", n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Unsorted Array\n");
    printArray(arr, n);

    //calling the selectionSort function by passing the array and the size of the array
    selectionSort(arr, n); 

    printf("Sorted array in ascending order: \n");
    printArray(arr, n);

    free(arr);
    return 0;
}


  
  
  
  