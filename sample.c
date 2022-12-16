/*

you will be given a number 'num'. Your task is to find the sum of digits of 'num'.
Example

input:
 12

output:
 3

input:
 345

output:
 12
 */

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("enter the values for number")
    scanf("%d", &num);

    // Write your code here
    while (num !=0) // 123 1=0 (t)
    {
        sum = sum + (num % 10); // 0+123%10 =0+3
        num = num / 10;//12
    }
printf("%d",sum);
    return 0;
}