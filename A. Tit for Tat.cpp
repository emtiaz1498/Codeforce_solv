#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;

    for(int i=0; i<t; i++)
    {
        cin>>n>>k;

    }
    int a[n];
     for(int i=0; i<n;i++)
        {
            cin>>a[i];
cout<<a[i]-1<<" "<<a[i+1]+1<<endl;
        }

}
