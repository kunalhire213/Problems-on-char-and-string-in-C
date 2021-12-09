/*
    Accept string from user and accept one character. Check wheather that 
    character is present in string or not.
    
    input : Marvellous       input : Marvellous  
            e                        w
    output : true            output : false
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str , char ch)
{
  bool flag = false;
  while(*str != '\0')
  {
    if(*str == ch)
    {
      flag = true;
      break;
    }
    str++;
  }
  return flag;
}

int main()
{
  char Arr[20] = {'\0'};
  char cValue = '\0';
  bool bRet = false;
  
  printf("Enter String\n");
  scanf("%[^'\n']s",Arr);
  
  printf("Enter Character\n");
  scanf(" %c",&cValue);
  
  bRet = ChkChar(Arr,cValue);
  
  if(bRet == true)
  {
    printf("Character found\n"); 
  }
  else
  {
    printf("Character is not found\n");
  }

return 0;
}











