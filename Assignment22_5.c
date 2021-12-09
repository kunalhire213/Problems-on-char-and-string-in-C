/*
   Accept string from user and Display in reverse order.
   
   input : "Marvellous"
   
   output : "suollevraM"
*/

#include<stdio.h>
void Reverse(char *str)
{
  char *ptr = str;
  char temp = '\0';
  while(*ptr != '\0')
  {
    ptr++;
  }
  ptr--;
  
  while(str < ptr)
  {
    temp = *str;
    *str = *ptr;
    *ptr = temp;
    
    str++;
    ptr--;
  }
}
int main()
{
  char Arr[20];
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  Reverse(Arr);
  printf("Reverse String is : %s\n",Arr); 
  
  return 0;
}
