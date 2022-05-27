#include<iostream>
using namespace std;

int main()
{
    int n;
    int a,b;
    int x=0,max=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        x=(x-a)+b;
        if(max<x)
        {
            max=x;
        }

    }
    cout<<max<<endl;
    return 0;
}
