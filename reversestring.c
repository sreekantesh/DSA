/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
