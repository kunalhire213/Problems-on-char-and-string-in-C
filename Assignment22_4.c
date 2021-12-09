/*
   Accept string from user and check wheather it contains vowels in it or not.
   
   input : "MarvellouS"
   output : true
   
   input : "xyz"
   output : false
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
  char ch = '\0';
  while(*str != '\0')
  {
    if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
    {
      ch = *str;
      break;
    }
    else if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
    {
      ch = *str;
      break;
    }
    str++;
  }
  if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
  {
    return true;
  }
  else if((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
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
  char Arr[20];
  bool bRet = 0;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  bRet = ChkVowel(Arr);
  if(bRet == true)
  {
    printf("It contains Vowel\n");
  }
  else
  {
    printf("There is no Vowel\n");
  }
  
  return 0;
}
