#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()
{
    int tc;
    ll n;
    cin>>tc;
    ll ans=0ll;
    while(tc--){
        cin>>n;
        ll m=__builtin_popcount(n);
        if(m==1ll) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
