#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    int a,b,c;
    int s1=0,s2=0,s3=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        s1=s1+a;
        s2=s2+b;
        s3=s3+c;

    }
    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
