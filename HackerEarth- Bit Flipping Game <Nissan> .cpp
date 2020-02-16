#include<bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n;
    cin>>n;
    int pos[1000001];
    memset(pos,0,sizeof(pos));
    while(n--)
    {
        cin>>s;
        int lngth=s.size();
        for(int i=0;i<lngth;i++) if(s[i]=='1') pos[i]++;
    }
    int ans=0;
    for(int i=0;i<1000001;i++) if(pos[i]) ans++;
    if(ans%2==0) cout<<"B"<<'\n';
    else cout<<"A"<<'\n';
    cout<<ans<<endl;
}
