#include <stdio.h>
int main()
{
    int row, column, m, n;
    printf("enter row element");
    scanf("%d", &m);
    printf("enter column element");
    scanf("%d", &n);
    int a[m][n];
    printf("enter all elements");
    for (row = 1; row <= m; row++)
    {
        for (column = 1; column <= n; column++)
        {
            scanf("%d", &a[row][column]);
        }
    }
     printf("the elements are :\n");
    for (row = 1; row <= m; row++)
    {
        for (column = 1; column <= n; column++)
        {
            printf("%d", a[row][column]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}