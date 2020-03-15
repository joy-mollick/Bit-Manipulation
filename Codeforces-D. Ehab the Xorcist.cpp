#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;


int main()

{
   ll xr_u,sum_v;
   cin>>xr_u>>sum_v;
   if(xr_u>sum_v)
   {
       cout<<"-1"<<endl;
       return 0;
   }
   else if(xr_u%2!=sum_v%2)
   {
       cout<<"-1"<<endl;
       return 0;
   }
   else if(xr_u==sum_v && sum_v!=0)
   {
       cout<<"1"<<endl;
       cout<<sum_v<<endl;
       return 0;
   }
   else if(xr_u==sum_v && sum_v==0)
   {
       cout<<"0"<<endl;
       return 0;
   }
   else
   {
       ll x=(sum_v-xr_u)/2ll;
       ll x1=xr_u;
       ll x2=x;
       if((x^(x1+x2))==xr_u)// there is no 1 in common position x and u that means x+u=x^u
       {
           cout<<"2"<<endl;
           cout<<(x+xr_u)<<" "<<x<<endl;
       }
       else{
        cout<<"3"<<endl;
        cout<<x<<" "<<x1<<" "<<x2<<endl;
       }
   }
}
