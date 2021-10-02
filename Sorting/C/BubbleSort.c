#include <stdio.h>

// function to sort
void bubbleSort(int array[], int n) {
  int temp,i,j;

  /* sorting in ascending order */
  for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){  //after first iteration the largest element will be at its position;
		if(array[j]>array[j+1]){   //compare the element with adjacent element to find smallest element 
		//swap the element
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}	
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

//main function
int main() {
  int data[] = {2,-4,7,8,4,7}; 
  int n = sizeof(data) / sizeof(data[0]);
  printf("Unsorted Array\n");
  printArray(data, n);
  
  bubbleSort(data, n); /* calling the bubbleSort function by passing the array and the size of the array */
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
