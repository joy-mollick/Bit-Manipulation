#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

bool comp(ll  a,ll b)
{
    ll x=__builtin_popcount(a);
    ll y=__builtin_popcount(b);
    return(x<y);
}

int main()

{
    ll a;
    int tc;
    cin>>tc;
    while(tc--)
    {
        int t;
        cin>>t;
        ll arr[t];
        for(int i=0;i<t;i++)
        {
            cin>>arr[i];
        }
        stable_sort(arr,arr+t,comp);
        for(int j=0;j<t;j++) cout<<arr[j]<<" ";
        cout<<'\n';
    }
}
