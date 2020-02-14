#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

bool comp(const ll &a,const ll &b)
{
    ll x=__builtin_popcount(a);
    ll y=__builtin_popcount(b);
    return (x<y);
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        stable_sort(arr,arr+n,comp);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
