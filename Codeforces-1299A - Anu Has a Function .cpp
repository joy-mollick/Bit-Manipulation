#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int prefix[n+1];
    int suffix[n+1];
    prefix[0]=INT_MAX;
    suffix[n]=INT_MAX;
    for(int i=0;i<n;i++)
    {
        prefix[i+1]=prefix[i]&(~arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        suffix[i]=suffix[i+1]&(~arr[i]);
    }
    int ans=-1;
    int position=0;
    /// prefix[i] hold all and operations with ~ x ,x is all elements before i,excluding i
    /// suffix[i] hold all and operations with ~ x ,x is all elements after i ,including i
    for(int i=0;i<n;i++)
    {
        int nw_val=arr[i]&prefix[i]&suffix[i+1];
        if(nw_val>ans)
        {
            ans=nw_val;
            position=i;
        }
    }
    cout<<arr[position]<<" ";
    for(int i=0;i<n;i++)
    {
        if(i!=position)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
