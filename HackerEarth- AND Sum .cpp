#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll mod=1e9+7;

ll po(ll a,ll b)
{
    ll ans=1ll;
    while(b)
    {
        if(b&1ll) ans=(ans*a)%mod;
        
        a=(a*a)%mod;
        b=b>>1ll;
    }
    return (ans%mod);
}

int main()

{
    
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        ll arr[n];
        ll ans=0ll;
        ll num_of_sets=0ll;
        ll values=0ll;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll bit_set[32]={0ll};
        for(int j=0;j<32;j++)
        {
            for(int i=0;i<n;i++){
                
            if(arr[i]&(1<<j))
            {
                bit_set[j]++;
            }
            
            }
        }
        for(int k=0;k<32;k++)
        {
            num_of_sets=po(2ll,bit_set[k])-1ll;
            values=po(2ll,k);
            ans=(ans+(num_of_sets*values)%mod)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
