/*
     Accept string from user and copy that characters of that string into another
     string by converting all Capital characters into Small characters.
     
     Input : Marvellous
     
     Output : marvellous
*/

#include<stdio.h>

void StrCpySmall(char *src , char *dest)
{
  
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *dest = *src + 32;
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
    
    StrCpySmall(Arr,Brr);
    
    printf("Updated string is : %s\n",Brr);
    

return 0;
}













