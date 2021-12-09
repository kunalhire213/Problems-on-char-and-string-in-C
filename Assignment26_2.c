/*
     Accept string from user and copy that characters of that string into another
     string by removing all white spaces.
     
     Input : Marve llo us
     
     Output : Marvellous
*/

#include<stdio.h>

void StrCpyX(char *src , char *dest)
{
  
    while(*src != '\0')
    {
        if(*src != ' ')
        {
           *dest = *src;
           dest++;
        }
        
        src++;
        
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    StrCpyX(Arr,Brr);
    
    printf("Updated string is : %s\n",Brr);
    

return 0;
}













