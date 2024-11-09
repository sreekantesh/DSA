#include <stdio.h>
#include <stdlib.h>
int fun(const void *a,const void *b)
{
    return ((*(int*)b) - (*(int*)a));
}
int main()
{
    int arr[]={2,5,8,66,33,44,12};
    
    int s=sizeof(arr)/sizeof(arr[0]);
    
    qsort(arr,s,sizeof(arr[0]),fun);
    for(int i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
