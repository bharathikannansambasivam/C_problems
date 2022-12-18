/*You will be given a positive number 'N'. Your task is to print the diagonals of an N x N box of stars.
Example

input:
 3

output:
 *  *
  *
*  *

input:
 4

output:
 *    *
  **
  **
*    **/

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter N values");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}