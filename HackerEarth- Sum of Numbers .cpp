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
        int tar;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>tar;
        bool ok=false;
        for(int i = 0;i < (1 << n); ++i)
        {
            sum=0;
            for(int j = 0;j < n;++j){
                if(i & (1 << j))
                    sum=sum+arr[j];
            }
            if(sum==tar) {ok=true;break;}
        }
        if(ok) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }

    return 0;
}
