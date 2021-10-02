# Python program to implement Insertion Sort

def insertion_sort(arr):
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
        key = arr[i]

        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key

# Driver function
if __name__ == '__main__':
    
    nums=list(map(int,input().split()))
    insertion_sort(nums) # Calling the insertion_sort function by passing the 'nums' list
    
    # Printing the sorted list
    print(nums)
