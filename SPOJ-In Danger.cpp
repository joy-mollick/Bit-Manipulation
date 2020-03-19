#include<bits/stdc++.h>

using namespace std;

/// One kind of LIS problem 
// Here Solved with BIT Manipulation
typedef unsigned long long ll;


int main()

{
    string s;

    while(cin>>s && s!="00e0")
    {
        ll n=(s[0]-'0')*10 +(s[1]-'0');
        ll zero=s[3]-'0';
        while(zero--)
        {
            n=n*10ll;
        }
        ll m=log2(n);// finding 2^m from 2^m + t=n 
        ll two_m=1ll<<m;// two_m states 2^m
        ll t=n-two_m;//It states the number without the leftmost biton 
        ll safe=2ll*t;// One side right shifting 
        safe=safe+1ll;// add the first bit to the last 
        cout<<safe<<'\n';
    }

    return 0;
}
