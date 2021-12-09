/*
   Accept character from user,if character is capital then display all the characters from the input 
   characters till Z. if character is small then print all the character in reverse order till a.
   in order cases return directly. 
   
   input : T     
   output:  T  U  V  W  X  Y  Z
   
   input : g
   output:  g  f  e  d  c  b  a
*/   

#include<stdio.h>
void Display(char ch)
{
  if((ch >= 'A')&&(ch <= 'Z'))
  {
    while(ch <= 'Z')
    {
      printf("%c\t",ch);
      ch++;
    }
  }
  else if((ch >= 'a')&&(ch <= 'z'))
  {
    while(ch >= 'a')
    {
      printf("%c\t",ch);
      ch--;
    }
  }
  printf("\n"); 
}
int main()
{
  char cValue = '\0';
  printf("Enter the Character :\n");
  scanf("%c",&cValue);
  
  Display(cValue);
  
  return 0;
}
