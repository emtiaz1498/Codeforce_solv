
#include<bits/stdc++.h>
using namespace std;

#define MAX 1000001
char prime[MAX]; // 0 দিয়ে initialize করতে হবে
void primeGenerator( int n ) // n পর্যন্ত প্রাইম বের করব
{
    int x = sqrt( n );
    prime[0] = prime[1] = 1;         // 0 এবং 1 প্রাইম না
    for( int i = 4; i <= n; i += 2 ) // জোড় সংখ্যাগুলোকে বাদ দিয়ে দিব
        prime[i] = 1;
    for( int i = 3; i <= x; i += 2 ) {
        if( prime[i] == 0 ) {      // i যদি মৌলিক সংখ্যা হয় তাহলে 2i
            for( int j = i+i; j <= n; j += i ) // থেকে শুরু করে i
                prime[j] = 1;      // এর সকল গুণিতককে বাদ দিয়ে দিব
        }
    }
    return;
}
int main()
{
    int n=10;
    cout<< primeGenerator;

}
