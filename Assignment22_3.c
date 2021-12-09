/*
   Accept string from user and return diffrence between frequency of small characters and 
   frequency of capital characters.
   
   input : "MarvellouS"
   
   output : 6  (8 - 2)
*/

#include<stdio.h>

int Diffrence(char *str)
{
  int Ccount = 0 , Scount = 0;
  while(*str != '\0')
  {
    if((*str >= 'A')&&(*str <= 'Z'))
    {
      Ccount++;
    }
    else if((*str >= 'a')&&(*str <= 'z'))
    {
      Scount++;
    }
    str++;
  }
  return Scount - Ccount;
}

int main()
{
  char Arr[20];
  int iRet = 0;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  iRet = Diffrence(Arr);
  printf("%d\n",iRet);
  
  return 0;
}
