#include<iostream>
#include<iostream>
using namespace std;
 int main()
 {
     string s;
     cin>>s;
     string a="hello";
     int p=0,q=0;
     for(int i=0 ;i<s.size(); i++)
     {
         if(s[i]==a[p])
         {
             p++;
             q++;
         }
     }
     if(q==5)
     {
         cout<<"YES"<<endl;
     }
     else
        cout<<"NO"<<endl;
     return 0;
 }
