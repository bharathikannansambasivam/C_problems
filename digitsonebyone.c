/*
Write a C program to get a positive integer from the user. And print it's digits one by one.
Example

input: 
 1256

output: 
 6 
 5 
 2 
 1

input: 
 333

output: 
 3 
 3
 3*/


#include<stdio.h> 

int main()
{
   int input;
   printf("enter the values");
   scanf("%d",&input);
 while(input !=0){ //123
 int sum=0;
     sum=sum +input%10; //0 +3 //12 
        input = input/10; //123/10 =12
       printf("%d",sum ); 
       printf("\n");

        
   }  

    return 0; 
}