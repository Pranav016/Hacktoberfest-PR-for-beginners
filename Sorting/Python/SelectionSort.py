# Python program to implement Selection Sort

def selection_sort(arr):
    # Traverse through all array elements
    for i in range(len(arr)):

        # Find the minimum element in remaining unsorted array
        min_idx = i
        for j in range(i + 1, len(arr)):
            if arr[min_idx] > arr[j]:
                min_idx = j

        # Swap the found minimum element with the first element
        arr[i], arr[min_idx] = arr[min_idx], arr[i]


# Driver function
if __name__ == '__main__':
    ls = list(map(int, input().split()))  # Taking 'ls' list input as integers separated by space
    selection_sort(ls)  # Calling the Selection_sort function by passing the 'ls' list

    # Printing the sorted list
    print(*ls)
