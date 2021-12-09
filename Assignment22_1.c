/*
   Accept string from user and count number of Capital Characters.
   
   input : "Marvellous Multi OS"
   
   output : 4
*/

#include<stdio.h>

int CountCapital(char *str)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if((*str >= 'A')&&(*str <= 'Z'))
    {
      iCnt++;
    }
    str++;
  }
  return iCnt;
}

int main()
{
  char Arr[20];
  int iRet = 0;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  iRet = CountCapital(Arr);
  printf("%d\n",iRet);
  
  return 0;
}
