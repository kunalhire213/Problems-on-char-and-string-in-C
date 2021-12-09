/*
    Accept string from user and accept one character. Return index of 
    Last occurance of that character.
    
    input : Marvellous Multi OS       input : Marvellous  
            M                                 w
    output : 10                       output : -1
*/

#include<stdio.h>

int LastChar(char *str , char ch)
{
   int i = 0 ,iCnt = -1;
   
   while(*str != '\0')
   {
     if(*str == ch)
     {
        iCnt = i;
     }
     
     i++;
     str++;
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
  
  iRet = LastChar(Arr,cValue);
  
  printf("character loction is : %d\n",iRet);

return 0;
}











