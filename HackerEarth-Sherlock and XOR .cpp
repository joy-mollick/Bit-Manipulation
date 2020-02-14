#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

ll mod=1e9+7;


int main()

{
  int tc;
  cin>>tc;
  while(tc--)
  {
      int n;
      cin>>n;
      int a;
      ll odd=0;
      ll even=0;
      while(n--)
      {
          cin>>a;
          if(a%2==0) even++;
          else odd++;
      }
      ll ans=(even*odd);
      cout<<ans<<endl;
  }
}
