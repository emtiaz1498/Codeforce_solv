#include<iostream>
using namespace std;
int main()
{
    int n,k,t;
    int ans;
    cin>>n>>k;
    if(n%2==0)
    {
        t=n/2;
    }
    else
    {
        t=(n/2)+1;
    }
    if(k<=t)
    {
        ans=(2*k)-1;
    }
    else
    {
        ans=(k-t)*2;
    }
    cout<<ans;
}
