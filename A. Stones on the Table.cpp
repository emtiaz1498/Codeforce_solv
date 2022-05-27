#include<bits/stdc++.h>
using namespace std;
int main()
{

int n;
int i;
int cnt=0;
cin>>n;
char ar[50];
char *str=ar;
cin>>str;
if(n>=1 || n<=50)
{
    for(int i=0;i<n-1;i++)
    {
        if(*(str+i)==*(ar+i+1))
        {
            cnt++;
        }

    }
    cout<<cnt;
}
   return 0;
}
