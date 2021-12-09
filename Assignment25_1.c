/*
     Accept string from user and copy the contents of that string into
     another string.
     
     input : Marvellous
     output : Marvellous  (in another string)
*/

#include<stdio.h>

void strcpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        
        src++;
        dest++;
    }

}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};      // empty string
    
    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);
    
    strcpyX(Arr,Brr);
    
    printf("Copied string is : %s\n",Brr);

return 0;
}
