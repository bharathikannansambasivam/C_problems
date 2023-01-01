#include <stdio.h>
int main()
{

    int n;
      printf("enter the value of n");
    scanf("%d", &n);

    printf("%d", sum(n));
    return 0;
}

int sum(int n)
{

    if (n == 1)
        return n; 
    return n + sum(n - 1);
}
