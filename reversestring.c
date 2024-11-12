

#include <stdio.h>
#include <string.h>
void fun(char *arr)
{
    char *start=arr;
    char *end=arr+strlen(arr)-1;
    
    while(start<end)
    {
        *start=*start ^ *end;
        *end=*start ^ *end;
        *start=*start ^ *end;
        end--;
        start++;
    }
    
}
int main()
{
    char arr[4]="sree";
    
    fun(arr);
printf("%s",arr);
    return 0;
}


//*******************************************************************************
#include <stdio.h>
#include <string.h>
void fun(char arr[])
{
    int s=strlen(arr);
    int i=s-1;
    int j;
    while(j<i)
    {
        char c=arr[i];
        arr[i]=arr[j];
        arr[j]=c;
        i--;
        j++;
    }
    printf("%s",arr);
}
int main()
{
    char arr[4]="sree";
    
    fun(arr);

    return 0;
}
