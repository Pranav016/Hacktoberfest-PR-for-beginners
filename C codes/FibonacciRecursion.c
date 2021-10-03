#include <stdio.h>
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
    printf("Please enter the number of fibonacci numbers you would like to see: ");
    int num;scanf("%d", &num);
    int f = fibonacci(num);
    printf("The fibonacci sequence is:\n");
    for(int i = 0;i<num;i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
}