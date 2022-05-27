#include<stdio.h>
int main()
{
    char str[1005];
    scanf("%s",str);
    if(str[0]>='a'&&str[0]<='z')
    str[0]^=32;
    printf("%s\n",str);
}
