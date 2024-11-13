#include <stdio.h>
#include<string.h>

void swap(char *s1,char *s2)
{
  char *temp=s1;
  s1=s2;
  s2=temp;
  printf("%s",s1);
 printf("%s",s2);
}

int main()
{
    char *str1="sree";
    char *str2="kantesh";
    swap(str1,str2);
    
    return 0;
}
