#include <stdio.h>
union struct_s
{
    int i;
    char c[4];
};
int main()
{
    union struct_s s;
    s.i=0x11223344;
    
    if(s.c[1] ==0x44)
    {
        printf("little");
    }
    else
    {
        printf("Big");
    }
    
    return 0;
}
//////////////////////////////////////////////////////
#include <stdio.h>
#include <stdint.h>
int main()
{
uint32_t i=0x11223344;
if(*(uint8_t*)&i==0x44)
{
    printf("little");
}
else
{
    printf("big");
}
    
    return 0;
}
