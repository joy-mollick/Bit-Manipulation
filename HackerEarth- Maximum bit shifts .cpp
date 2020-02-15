#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll right(ll N)
{
    ll cnt=0;
    ll ans=0;
    while(N)
    {
        if(N%2==1ll) ans=cnt;
        N=N>>1ll;
        cnt++;
    }
    return ans+1;
}

int main()

{
    ll n,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        ll tot=__builtin_popcountll(a);
        ll rghtpos=right(a);
        ll sum=0ll;
        for(ll i=rghtpos;i>(rghtpos-tot);i--)
        {
            ll p=i-1;
            sum=sum+(1ll<<p);
        }
        cout<<sum<<" ";
    }
    return 0;
}
