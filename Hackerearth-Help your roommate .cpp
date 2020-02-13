#include<bits/stdc++.h>

using namespace std;

int main()

{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int bts=__builtin_popcount(a);
        cout<<bts<<'\n';
    }
    return 0;
}
