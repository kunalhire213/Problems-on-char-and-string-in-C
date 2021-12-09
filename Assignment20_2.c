/*
   Accept character from user and check wheather it is Capital alphabet or not.
   (A-Z)
   input : F                 input : f
   output : TRUE             output : FALSE
*/   

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckCapital(char ch)
{
  if((ch >= 'A')&&(ch <= 'Z'))
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
  
  bRet = CheckCapital(cValue);
  
  if(bRet == TRUE)
  {
    printf("It is Capital character\n");
  }
  else
  {
    printf("It is Not a Capital character\n");
  }
  
  return 0;
}
