#include<bits/stdc++.h>

using namespace std;

//typedef long long ll;


int main()

{
    //ios_base::sync_with_stdio(false);
    long long  tc,n;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld",&n);
        unsigned long long  one;
        unsigned long long two;
        long long ans=0ll;
        for(one=2ll;one<n;one=one<<1)
        {
            for(two=1ll;two<one;two=two<<1)
            {
                if(one+two<=n)
                {
                    ans=(ans+one+two)%1000000007;
                }
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
