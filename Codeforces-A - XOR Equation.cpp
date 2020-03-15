#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;


int main()

{
   ll xr_u,sum_v;
   cin>>sum_v>>xr_u;
   if(xr_u>sum_v)// xr_u can't be greater than sum
   {
       cout<<"0"<<endl;
       return 0;
   }
   else if(xr_u%2!=sum_v%2)// if parity different , no answer 
   {
       cout<<"0"<<endl;
       return 0;
   }

   else
   {
       ll x=(sum_v-xr_u)/2ll;
       ll x1=xr_u;
       ll x2=x;
       if((x^(x1+x2))==xr_u)// possible two numbers can fullfill conditions
       {
           ll bit_cnt=__builtin_popcountll(xr_u);
           ll ans=pow(2,bit_cnt);// the resultant xr_u holds bit_cnt times 1 in it , so we can make pair 2^bit_cnt.
           if(x==0||(x1+x2)==0) ans=ans-2ll;//two zero pairs will not be counted because only positive pair
           cout<<ans<<endl;
       }
       else{
        cout<<"0"<<endl;
       }
   }
}
