#include<stdio.h>
int main() {
      int first, second, temp;
      printf("Enter first number: ");
      scanf("%d", &first);
      printf("Enter second number: ");
      scanf("%d", &second);

      // Value of first is assigned to temp
      temp = first;

      // Value of second is assigned to first
      first = second;

      // Value of temp (initial value of first) is assigned to second
      second = temp;

      printf("\nAfter swapping, firstNumber = %d\n", first);
      printf("After swapping, secondNumber = %d", second);
      return 0;
}
