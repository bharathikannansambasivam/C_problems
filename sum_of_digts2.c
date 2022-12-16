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
    int num, sum = 0,i;
    printf("enter the values for number");
    scanf("%d", &num);
    for(i=0;num !=0;num=num/10){
        sum=sum+(num%10);
    }
    printf("%d",sum);
}