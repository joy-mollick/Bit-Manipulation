#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{
    int tc;
    int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        ll sum=0ll,a;
        while(n--)
        {
            cin>>a;
            if(a>0)
            {
                sum=sum+a;
            }
        }
        ll num_of_bit=__builtin_popcount(sum);
        if(num_of_bit==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
