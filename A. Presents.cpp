#include<iostream>
using namespace std;
int main()
{
    int t;
    int ans;
    cin>>t;
    int ar[t];
    for(int i=0; i<t; i++)
    {
        cin>>ar[i];
    }
     for(int j=1; j<=t;j++)
    {
        for(int i=0; i<t; i++)
        {
        if(j==ar[i])
        {
            ans=i+1;
            cout<<ans<<" ";
        }
        }
    }

    return 0;
}
