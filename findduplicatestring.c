#include <stdio.h>

int main()
{
    char name[5]="sree";
    int H[26];
    
    for( int i=0;name[i]!='\0';i++)
    {
        
        H[name[i]-97] +=1;
    }
    for(int j=0;j<26;j++)
    {
        if(H[j] >1)
        {
            printf("%c",j+97);
            printf("%d",H[j]);
        }
    }

    return 0;
}
