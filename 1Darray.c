/*
Example

input:
 5
 1 5 10 50 123

output:
 1 5 10 50 123*/
#include <stdio.h>

int main()
{
    // Edit below this line

    int i, n;
    printf("ENTER N VALUE");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE VALUE");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("THE VALUES ARE \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}