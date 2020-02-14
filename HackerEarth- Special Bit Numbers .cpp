#include<bits/stdc++.h>

using namespace std;

const int mxn=1e5+1;

int sum[mxn];

int main()
{
    int n,l,r;
    int q;
    cin>>n>>q;
    int arr[n+1];
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]&(arr[i]<<1))  count++;// if adjacent bit is on(1),then obviously one side left shift with original number and gives you 1
        sum[i]=count;
    }
    while(q--)
    {
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}
