/*
     Accept string from user and copy capital characters from that string into
     another string.
     
     input : Marvellous Multi OS
     output : MMOS  (in another string)
*/

#include<stdio.h>

void strcpyCapitalX(char *src , char *dest)
{
    if((*src >= '0')&&(*src <= '9'))   // Filter 
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src;
            
            dest++;
        } 
        
        src++;
    }

}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};      // empty string
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpyCapitalX(Arr,Brr);
    
    printf("%s\n",Brr);

return 0;
}
