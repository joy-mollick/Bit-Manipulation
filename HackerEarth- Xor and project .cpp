#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;


int main()

{
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    if(n==0ll)
    {
        cout<<"0"<<endl;
        return 0;
    }
    for(ll x=1ll;;x++)
    {
        if((x^(x>>1ll))==n)
        {
            cout<<x<<'\n';
            break;
        }
    }
}
