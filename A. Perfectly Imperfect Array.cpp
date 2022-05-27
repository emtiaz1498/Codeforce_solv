#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int ans=1;
    int arr[n];
        cin>>t;
    while(t--)
    {
        cin>>n;
    for(int i=0; i<n; i++)
    {

        cin>>arr[i];
        ans=ans*arr[i];
    }


    if(!sqrt(ans))
    {
        cout<<"NO"<<endl;
    }
   else if(sqrt(ans))
    {
        cout<<"YES"<<endl;
    }
    }
    return 0;
}
