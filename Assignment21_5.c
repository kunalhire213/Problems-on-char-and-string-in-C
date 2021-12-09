/*
   Accept character from user and display its ASCII value in dicimal , octal and 
   hexadecimal format.
   
   input : A     
   output:  Decimal       65
            Octal        0101
            Hexadecimal  0X41
*/   

#include<stdio.h>
void Display(char ch)
{
  printf("Decimal\t Octal\t Hexadecimal\t");
  printf("\n");
  if((ch >= 'A')&&(ch <= 'Z')||(ch >= 'a')&&(ch <= 'z'))
  {
    printf("%d\t %o\t %x\t",ch,ch,ch);
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
