/*
   Accept string from user and count number of white spaces.
   
   input : "marvellous infosystem pune"
   
   output : "3"
*/

#include<stdio.h>
int CountWhitespace(char *str)
{
  int iCnt = 0;
  while(*str != '\0')
  {
    if(*str == ' ') 
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
  
  iRet = CountWhitespace(Arr);
  printf("%d\n",iRet);  
   
return 0;
}
