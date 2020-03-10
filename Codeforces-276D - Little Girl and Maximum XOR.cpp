
#include<bits/stdc++.h>

using namespace std;

// Simple dp and Number theory and sieve

typedef  long long ll;

ll left_mst_bit(ll x)
{
    int cont=0;
    ll pos=0;
    while(x)
    {
        if(x%2ll==1ll) {pos=cont;}
        x=x>>1ll;
        cont++;
    }
     return (pos+1);
}


int main()

{
   ll l,r;
   cin>>l>>r;
   ll xr=l^r;
   ll left_bit_pos=left_mst_bit(xr);
   ll ans=pow(2ll,left_bit_pos);
   ans=ans-1ll;
   if(l==r) cout<<"0"<<'\n';
   else cout<<ans<<'\n';
}
