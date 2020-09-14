
/// Codeforces- 913C - Party Lemonade.
/// Category: greedy + bit manipulation .

/// Fantastic problem 

#include<bits/stdc++.h>

using namespace std;

const int mxn=100002;

typedef long long ll;

ll cost[34];

int main()

{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   /// here we have to buy at least l liters
   /// but l liters will be filled up by liters in the form of 2^i.

   /// so we will traverse every bit of l and try to find the minimum money to buy those bits
   /// we can buy more than l liters but having cost minimum.

   /// 2^i, can be formed by 2^i-1 , 2^i-2 .... so on
   /// so, take minimum cost of forming 2^i from 2^0 ..


   int n,l;
   cin>>n>>l;

   for(int i=0;i<n;i++)
   {
       cin>>cost[i];
   }

   /// if we can make 2^i liters by 2 * 2^(i-1).
   /// else we can take cost[i] which is the cost of 2^i.
   /// so every time ,we check cost[i]=min(2*cost[i-1],cost[i]).

   for(int i=1;i<n;i++)
   {
       cost[i]=min(2ll*cost[i-1],cost[i]);
   }

   ll ans=0ll;

   /// we will traverse till 32,that's why we are filling up till 32
   for(int i=n;i<32;i++)
   {
       cost[i]=(2ll*cost[i-1]);
   }

   for(int i=0;i<32;i++)
   {
       ///if this bit's cost is less than before then take this
       if(ans>cost[i]) ans=cost[i];
       ///now check that if this bit is on ,you have to tale this
       if(l&(1<<i))
       {
           ans+=cost[i];
           ///cout<<i<<endl;
       }
   }

   cout<<ans<<endl;

   return 0;
}
