/*
     Accept string from user and copy Small characters from that string into
     another string.
     
     input : Marvellous Multi OS
     output : arvellous ulti  (in another string)
*/

#include<stdio.h>

void strcpySmallX(char *src , char *dest)
{
    if((*src >= '0')&&(*src <= '9'))   // Filter 
    {
        return;
    }

    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src;
            
            dest++;
        }
        else if(*src == ' ')
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
    
    strcpySmallX(Arr,Brr);
    
    printf("%s\n",Brr);

return 0;
}
