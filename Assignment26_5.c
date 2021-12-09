/*
     Accept string from user and copy that characters of that string into another
     string by toggling the case.
     
     Input : Marvellous
     
     Output : mARVELLOUS 
*/

#include<stdio.h>

void StrCpyToggle(char *src , char *dest)
{
  
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else if((*src >= 'a')&&(*src <= 'z'))
        {
            *dest = *src - 32;
        } 
        else
        {
           *dest = *src;
        }
        
        src++;
        dest++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    StrCpyToggle(Arr,Brr);
    
    printf("Updated string is : %s\n",Brr);
    

return 0;
}













