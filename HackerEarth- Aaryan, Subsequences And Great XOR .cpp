#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    long long ans=0,a;
    while(n--)
    {
        cin>>a;
        ans=(ans|a);
    }
    cout<<ans<<endl;
    return 0;
}
