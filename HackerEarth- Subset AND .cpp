#include<bits/stdc++.h>

using namespace std;

int main()

{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int s,n;
        cin>>s>>n;
        int arr[n];
        bool flag=false;
        for(int i=0;i<n;i++) cin>>arr[i];
        int res=s&arr[0];
        if(res==0) flag=true;
        for(int i=1;i<n;i++)
        {
            res=res&arr[i];
            if(res==0)
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
        
    }
    return 0;
}
