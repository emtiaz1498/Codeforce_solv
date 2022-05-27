#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int c=0;
    cin>>s;
    for(int i=0 ; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
           c++;
    }
    if(c==4 || c==7)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
