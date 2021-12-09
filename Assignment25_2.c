/*
     Accept string from user and copy the contents of that string into
     another string.
     
     input : Marvellous
              5
     
     output : Marve  (in another string)
*/

#include<stdio.h>

void strNcpyX(char *src , char *dest , int iCnt)
{
   while((*src != '\0')&&(iCnt != 0))
   {
       *dest = *src;
       
       src++;
       dest++;
       iCnt--;
   }
}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};      // empty string
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    strNcpyX(Arr,Brr,10);
    
    printf("Copied string is : %s\n",Brr);

return 0;
}
