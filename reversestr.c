#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    int len, i;
    printf("enter the string \t");
    scanf("%s", str);
    len = strlen(str);
  

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len -i-1];
        str[len -i- 1] = temp;
    
    }
    printf("After reversing the string :%s", str); 
}
