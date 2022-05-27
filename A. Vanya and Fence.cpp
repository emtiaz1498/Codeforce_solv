#include<iostream>
using namespace std;
int main()
{
    int t,h;
    cin>>t>>h;
    int ar[t];
    int count=0,cnt=0;
    for(int i=0; i<t; i++)
    {
        cin>>ar[i];
        if(ar[i]<=h)
        {
            count++;
        }
        else
        {
            cnt+=2;
        }
    }
    cout<<count+cnt<<endl;
}
