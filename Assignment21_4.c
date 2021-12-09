/*
   Accept character from user,and check wheather it is special symbol or not.
   (!,@,#,$,%,^,&,*)
   
   input : %     
   output:  TRUE
   
   input : g
   output: FALSE
*/   

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
  if((ch >= '!')&&(ch <= '/')||(ch >= ':')&&(ch <= '?'))
  {
    return true;
  }
  else
  {
    return false;
  } 
}
int main()
{
  char cValue = '\0';
  bool bRet = false;
  
  printf("Enter the Character :\n");
  scanf("%c",&cValue);
  
  bRet = ChkSpecial(cValue);
  if(bRet == true)
  {
    printf("It is special symbol\n");
  }
  else
  {
    printf("It is Not a special symbol\n");
  }
  
  return 0;
}
