/*
   Accept string from user and convert it into Upper Case.
   
   input : "marvellous"
   
   output : "MARVELLOUS"
*/

#include<stdio.h>
void struprX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'a')&&(*str <= 'z'))
    {
      *str = *str - 32;
    }
    str++;
  } 
}
int main()
{
  char Arr[20];
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  struprX(Arr);
  printf("Modified String is : %s\n",Arr); 
  
  return 0;
}
