/*
   Accept character from user,if character is small display its corresponding capital character,
   and character is capital display its coresponding small character.In other cases display 
   as it is.
   
   input : A     input : m      input : 2     input : %
   output : a    output : M     output : 2    output : %
*/   

#include<stdio.h>
void Display(char ch)
{
  if((ch >= 'a')&&(ch <= 'z'))
  {
    ch = ch - 32;
    printf("%c\n",ch);
  }
  else if((ch >= 'A')&&(ch <= 'Z'))
  {
    ch = ch + 32;
    printf("%c\n",ch);
  }
  else
  {
    printf("%c\n",ch);
  }
}
int main()
{
  char cValue = '\0';
  printf("Enter the Character :\n");
  scanf("%c",&cValue);
  
  Display(cValue);
  
  return 0;
}
