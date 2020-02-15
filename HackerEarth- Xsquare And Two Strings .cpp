#include<bits/stdc++.h>

using namespace std;

int main()

{
    int tc;
    string s1,s2;
    cin>>tc;
    while(tc--)
    {
        cin>>s1>>s2;
        int bitonofs1=0,bitonofs2=0;
        for(int i=0;i<s1.size();i++)
        {
            int nm=s1[i]-'a';
            int pow_two=(1<<nm);
            bitonofs1=bitonofs1|pow_two;
        }
        for(int i=0;i<s2.size();i++)
        {
            int nm=s2[i]-'a';
            int pow_two=(1<<nm);
            bitonofs2=bitonofs2|pow_two;
        }
        if(bitonofs1&bitonofs2) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}
