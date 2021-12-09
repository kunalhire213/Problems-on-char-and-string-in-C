/*
     Accept string from user and copy that characters of that string into another
     string in reverse order.
     
     Input : Marvellous
     
     Output : suollevraM
*/

#include<stdio.h>

void StrCpyRev(char *src , char *dest)
{
    int iCnt = 0;
    while(*src != '\0')
    {
       src++;
       iCnt++;
    }
    src--;
    
    while(iCnt != 0)
    {
       *dest = *src;
       
       dest++;
       src--;
       iCnt--;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    StrCpyRev(Arr,Brr);
    
    printf("Updated string is : %s\n",Brr);
    

return 0;
}













