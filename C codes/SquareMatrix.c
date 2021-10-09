#include<stdio.h>

int main()
{
    int c, d, a[10][10], b[10][10], n, temp;
    printf("\nEnter the dimension of the matrix: \n\n");
    scanf("%d", &n);

    printf("\nEnter the %d elements of the matrix: \n\n",n*n);
    for(c = 0; c < n; c++) // to iterate the rows
        for(d = 0; d < n; d++) // to iterate the columns
            scanf("%d", &a[c][d]);

    // finding transpose of a matrix and storing it in b[][]
    for(c = 0; c < n; c++) // to iterate the rows
        for(d = 0; d < n; d++) //to iterate the columns
            b[d][c] = a[c][d];

    // printing the original matrix
    printf("\n\nThe original matrix is: \n\n");
    for(c = 0; c < n; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", a[c][d]);
        }
    printf("\n");
    }

    // printing the transpose of the entered matrix
    printf("\n\nThe Transpose matrix is: \n\n");
    for(c = 0; c < n; c++) // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", b[c][d]);
        }
        printf("\n");
    }

    // checking if the original matrix is same as its transpose
    for(c = 0; c < n; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            /* 
                even if they differ by a single element, 
                the matrix is not symmetric
            */
            if(a[c][d] != b[c][d]) 
            {
                printf("\n\nMatrix is not Symmetric\n\n");
                exit(0);    // a system defined method to terminate the program
            }
        }
    }

    /* 
        if the program is not terminated yet, 
        it means the matrix is symmetric
    */
    printf("\n\nMatrix is Symmetric\n\n");
    return 0;
}