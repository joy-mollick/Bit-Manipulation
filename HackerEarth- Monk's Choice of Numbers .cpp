#include<bits/stdc++.h>

using namespace std;

int main()

{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]=__builtin_popcount(arr[i]);
        }
        sort(arr,arr+n);
        long sum=0;
        for(int i=n-1;i>=n-k;i--) sum+=arr[i];
        cout<<sum<<endl;
    }
    return 0;
}
