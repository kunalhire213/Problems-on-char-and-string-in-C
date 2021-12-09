/*
   Accept character from user and check wheather it is Digit or not.
   (A-Z)
   input : 21                 input : f
   output : TRUE             output : FALSE
*/   

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckDigit(char ch)
{
  if((ch >= '0')&&(ch <= '9'))
  {
    return TRUE;
  }
  else 
  {
    return FALSE;
  }
}
int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;
  
  printf("Enter Character\n");
  scanf("%c",&cValue);
  
  bRet = CheckDigit(cValue);
  
  if(bRet == TRUE)
  {
    printf("It is Digit\n");
  }
  else
  {
    printf("It is Not a Digit\n");
  }
  
  return 0;
}
