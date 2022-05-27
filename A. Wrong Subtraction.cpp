#include<iostream>
using namespace std;

int main()
{
    int a,n;
    int i,w;
    cin>>a>>n;
    for(i=1;i<=n;i++)
    {
        if(a%10==0)
            a=a/10;
        else
            a--;
    }
    cout<<a<<endl;
    return 0;
}
