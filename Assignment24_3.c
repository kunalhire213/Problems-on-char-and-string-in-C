/*
    Accept string from user and accept one character. Return index of 
    first occurance of that character.
    
    input : Marvellous       input : Marvellous  
            l                        w
    output : 5               output : -1
*/

#include<stdio.h>

int FirstChar(char *str , char ch)
{
   int i = 0 , iCnt = 0;
   while(*str != '\0')
   {
     if(*str == ch)
     {
        iCnt = i;
        break;
     }   
     i++;
     str++;
   }
   
   if(*str == '\0')
   {
      return -1;
   }
   
   return iCnt;
}

int main()
{
  char Arr[20] = {'\0'};
  char cValue = '\0';
  int iRet = 0;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter Character\n");
  scanf(" %c",&cValue);
  
  iRet = FirstChar(Arr,cValue);
  
  printf("character loction is : %d\n",iRet);

return 0;
}











