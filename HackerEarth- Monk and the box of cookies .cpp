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
        int a[n];
        for(int i=0;i<n;i++) {cin>>a[i];}
        int arr[32];
        memset(arr,0,sizeof(arr));
        for(int j=0;j<32;j++)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]&(1<<j)) arr[j]++; // counting set bit in the numbers 
            }
        }
        int mx=0;
        int bit=0;
        for(int k=0;k<32;k++)
        {
            if(arr[k]>mx)
            {
                mx=arr[k];
                bit=k;// which setbit occurs maximum 
            }
        }
        cout<<bit<<endl;
    }
}
