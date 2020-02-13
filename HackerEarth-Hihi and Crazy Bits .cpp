#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;


int main()

{
    ios_base::sync_with_stdio(false);
    int tc;
    ll n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        ll j=0;
        while(n&(1<<j)) // finding the off bit from the right side
        {
            j++;
        }
        //jth bit is zero
        n=n|(1<<j);// jth bit is on
        cout<<n<<endl;
    }
}
