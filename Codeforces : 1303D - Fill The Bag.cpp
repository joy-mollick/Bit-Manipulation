
/// Codeforces : 1303D - Fill The Bag .
/// Category : Greedy + bit manipulation.

#include<bits/stdc++.h>

using namespace std;

const int mxn=100005;

typedef long long ll;

ll bit_number(ll x)
{
    ll bit=0;
    while(x)
    {
        bit++;
        x=x>>1ll;
    }
    return bit-1;
}

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   int tc;
   cin>>tc;

   ll num,m;
   ll cont[64];

   while(tc--)
   {
       cin>>num>>m;
       memset(cont,0,sizeof(cont));
       ll arr[m];
       ll sum=0ll;
       for(int i=0;i<m;i++)
    {
          cin>>arr[i];
          sum+=arr[i];
          /// counting the on bit
          cont[bit_number(arr[i])]++;
    }

    if(sum<num) {cout<<"-1"<<endl;}

    else
    {
        int res=0;
        for(int i=0;i<64;i++)
        {
            /// if bit is on in num
            if((num>>i)&1)
            {
                /// bit is used.
                cont[i]--;
            }

            /// two i bits can build up i+1 th bit
            /// greedily count those bits
            if(cont[i]>=2) cont[i+1]+=cont[i]/2ll;
            /// so this ith bit is not on ,but we need it
            /// then we will go up to on bit by decreasing cont[i+1] by -1
            if(cont[i]<0)  {cont[i+1]+=-1;res++;}
        }

        cout<<res<<endl;
    }

   }

   return 0;
}
