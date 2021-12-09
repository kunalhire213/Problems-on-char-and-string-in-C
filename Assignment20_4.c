/*
   Accept character from user and check wheather it is Small alphabet or not.
   (a-z)
   input : a                 input : A
   output : TRUE             output : FALSE
*/   

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlphabet(char ch)
{
  if((ch >= 'a')&&(ch <= 'z'))
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
  
  bRet = CheckAlphabet(cValue);
  
  if(bRet == TRUE)
  {
    printf("It is Small Case character\n");
  }
  else
  {
    printf("It is Not a Small Case character\n");
  }
  
  return 0;
}
