#include<bits/stdc++.h>


using namespace std;

int main()
{

    int a,b,c;
scanf("%d %d %d",&a,&b,&c);
        if(a==b+c || b==a+c || c==b+a)
        {
             cout<<"yes"<<endl;
        }
        else
            cout<<"No"<<endl;

    return 0;
}
