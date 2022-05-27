#include<stdio.h>

int search(int ar[], int arsiz, int key)
{
    for(int i=0; i<arsiz; i++)
        if(ar[i]==key)
        return i;
    return -1;
}
int main()
{
    int ar[]={2,5,7,8,4};
    int key=8;
    int arsiz= sizeof(ar) / sizeof(ar[0]);
    int result = search(ar,arsiz,key);
    if(result==-1)
    {
        printf("Element is not found");
    }
    else
        printf("Element is found,Index: %d",result);
}
