#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int a;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            int x=arr[i];
            int y=x^(x&(x-1));
            sum=sum+y;
        }
        cout<<sum<<'\n';
    }

    return 0;
}
