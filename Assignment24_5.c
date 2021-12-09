/*
    Accept string from user and reverse that string in place.
    
    input : abcd      input : abba  
                                             
    output : dcba     output : abba                 
*/


#include <stdio.h>

void strrevX(char *str)
{
    char *temp = str;
    char ch = '\0';
    
    while(*temp != '\0')
    {
       temp++;
    }
    temp--;
    
    while(str < temp)
    {
        ch = *str;
        *str = *temp;
        *temp = ch;
        
        str++;
        temp--;
    }
}
int main()
{
    char Arr[30];
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    strrevX(Arr);// strrevX(100);
    
    printf("Reverse string is : %s\n",Arr);
    return 0;
}








