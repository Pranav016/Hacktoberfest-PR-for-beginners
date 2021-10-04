#include <stdio.h>
 
void main ()
{
    int matrix[10][10];
    int i, j, m, n;
    int c = 0;
 
    printf("Enter order of the matix \n");
    scanf("%d %d", &m, &n);
    printf("Enter elements of the matix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                ++c;
            }
        }
    }
    if (c > ((m * n) / 2))
    {
        printf("The given matrix is Sparse Matrix \n");
    }
    else
        printf("The given matrix is not a Sparse Matrix \n");
    printf("There are %d number of Zeros.", c);
}