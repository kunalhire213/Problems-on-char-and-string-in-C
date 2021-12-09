/*
   Accept character from user and check wheather it is alphabet or not.
   (A-Z , a-z)
   input : F                 input : &
   output : TRUE             output : FALSE
*/   

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAlphabet(char ch)
{
  if(((ch >= 'A')&&(ch <= 'Z'))||((ch >= 'a')&&(ch <= 'z')))
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
    printf("It is character\n");
  }
  else
  {
    printf("It is not a character\n");
  }
  
  return 0;
}
