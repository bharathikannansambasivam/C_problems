/*
In the previous problem, we have printed sum of all the digits of a given number.

In this problem, you need to print the sum of odd and even numbers separately.
Example

input: 
 1246

output: 
 Odd Digit Sum  = 1 
 Even Digit Sum = 12

input: 
 333

output: 
 Odd Digit Sum  = 9 
 Even Digit Sum = 0*/


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
      

        if((sum%2) ==0){
            printf("%d even  Digit Sum \n",sum);
        }
        else 
        {
            printf("%d Odd Digit Sum \n",sum);
        }
        
   }  

    return 0; 
}
