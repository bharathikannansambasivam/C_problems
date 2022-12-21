#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int sum, difference, a, b;
    float c, d, e, f;
printf("entere input 1&2\n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    difference = a - b;
    printf("%d %d\n", sum, difference);
    printf("entere input 3&\n4");
    scanf("%f %f", &c, &d);
    e = c + d;
    f = c - d;
    printf("%.1f %.1f", e, f);
}