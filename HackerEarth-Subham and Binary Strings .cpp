#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


int main()

{
    ios_base::sync_with_stdio(false);
    int tc,n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') count++;
        }
        cout<<count<<'\n';
    }
}
