/*
     Accept string from user and copy that characters of that string into another
     string by converting all small characters into capital characters.
     
     Input : Marvellous
     
     Output : MARVELLOUS
*/

#include<stdio.h>

void StrCpyCap(char *src , char *dest)
{
  
    while(*src != '\0')
    {
        if((*src >= 'a')&&(*src <= 'z'))
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
    
    StrCpyCap(Arr,Brr);
    
    printf("Updated string is : %s\n",Brr);
    

return 0;
}













