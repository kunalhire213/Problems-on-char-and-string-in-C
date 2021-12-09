/*
     Accept 2 strings from user and concat second string after 
     first string.
     
     input : "Marvellous" 
             "Infosystem"
     
     output : "Marvellous Infosystem"
*/

#include<stdio.h>

void strcatX(char *src , char *dest)
{
    while(*src != '\0')
    {
        src++;
    }
    
    while(*dest != '\0')
    {
        *src = *dest;
        
        src++;
        dest++;
    }    
    
    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[30] = {'\0'};      // empty string
    
    printf("Enter First String\n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter Second String\n");
    scanf(" %[^'\n']s",Brr);
    
    strcatX(Arr,Brr);
    
    printf("%s\n",Arr);

return 0;
}
