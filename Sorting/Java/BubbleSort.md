## Bubble Sort
**There are various sorting algorithm available and Bubble sort is one of them.**
* It is very simple and easy to understand sorting algorithm and the major steps involved in it is swapping of elements.
* The worst time complexity is **O(n^2)**.
* The best time complexity is **O(n)**
* Best case occurs when the array is already sorted.
* Space complexity for bubble sort is constant i.e. O(1).

**Code for bubble sort**
```
public void BubbleSort(int Arr[])
{
	int n=Arr.length; //assigning Size of array to vairable n
	
	for(int i=1;i<n-1;i++) 
	for(int j=i+1;j<n-i-1;j++)	
		if(Arr[j]>Arr[j+1])
			{
				int temp=Arr[j];
				Arr[j]=Arr[j+1];
				A[j+1]=temp;

			}
	

}

```



