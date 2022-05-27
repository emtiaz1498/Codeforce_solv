#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int d=abs(a-b);
        int e=gcd(a, b);
        cout<<d<<e<<endl;
    }
}
