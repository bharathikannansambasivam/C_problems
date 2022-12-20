/*
input:
 samsung
 8700
 black

output:
 samsung
 8700
 black

input:
 nokia
 6000
 red

output:
 nokia
 6000
 red*/

#include <stdio.h>

int main()
{
    struct words
    {
        char mobile_name[100];
        int price;
        char mobile_colour[100];
    };
    struct words var, var2;
    printf("ENTER MOBILE NAME \t");
    scanf("%s", var.mobile_name);
    printf("ENTER MOBILE PRICE \t");
    scanf("%d", &var.price);
    printf("ENTER MOBILE COLOUR \t");
    scanf("%s", var.mobile_colour);

    printf(" MOBILE NAME: %s\n ", var.mobile_name);
    printf(" MOBILE PRICE: %d\n", var.price);
    printf(" MOBILE COLOUR :%s", var.mobile_colour);

    return 0;
}