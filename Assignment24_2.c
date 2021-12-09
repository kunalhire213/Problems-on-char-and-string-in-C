/*
    Accept string from user and accept one character. Return frequency of
    that character.
    
    input : Marvellous       input : Marvellous  
            l                        w
    output : 2            output : 0
*/

#include<stdio.h>

int CountFrequency(char *str , char ch)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if(*str == ch)
    {
      iCnt++;
    }
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
  
  iRet = CountFrequency(Arr,cValue);
  
  printf("Total number of characters are : %d\n",iRet);

return 0;
}











