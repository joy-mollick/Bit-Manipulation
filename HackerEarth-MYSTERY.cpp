#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long  n;
    while(cin>>n)
    {
         long long pos=n^(n&(n-1));
        //long long ans=pow(2,pos-1);
        cout<<pos<<'\n';
    }
    
    return 0;
}
