#include <stdio.h>

#include <math.h>
int n, r, sum = 0, power = 0;
int show(int n)
{

    if (n <= 0)
        printf("%d", sum);
    else
    {
        r = n % 10;
        sum = sum + r * pow(2, power);
        // n = n / 10;
        power = power + 1;

        show(n / 10); 
    }
    return 0;
}
void main()
{

    printf("enter binary number");
    scanf("%d", &n);

    show(n);
}
