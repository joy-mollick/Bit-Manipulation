#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main()

{
    ios_base::sync_with_stdio(false);
    ll tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        ll sum=0ll;
        for(ll i=1ll;i<=n;i=i<<1ll)
        {
            for(ll j=1ll;j<i;j=j<<1ll)
            {
                if(i+j<=n)
                {
                    sum=(sum+i+j)%1000000007;
                }
            }
        }
        cout<<sum<<'\n';
    }
    
    return 0;
}
