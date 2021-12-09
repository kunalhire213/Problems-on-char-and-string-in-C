/*
   Accept string from user and Toggle the case.
   
   input : "MarVEllouS"
   
   output : "mARveLLOUs"
*/

#include<stdio.h>
void strtoggleX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'a')&&(*str <= 'z'))
    {
      *str = *str - 32;
    }
    else if((*str >= 'A')&&(*str <= 'Z'))
    {
      *str = *str + 32;
    }
    str++;
  } 
}
int main()
{
  char Arr[20];
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  strtoggleX(Arr);
  printf("Modified String is : %s\n",Arr); 
  
  return 0;
}
