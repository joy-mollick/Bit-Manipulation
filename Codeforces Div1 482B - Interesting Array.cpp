

/// Codeforces Div1 482B - Interesting Array 
/// Nice one !


/// data structure + bit manipulation 


#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mx=100000;
int times[mx+1][31];
int sum[mx+1][31];


int main()

{

    int n,m;
    cin>>n>>m;

    int l[m+1],r[m+1],q[m+1];

    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>q[i];

    for(int k=0;k<=30;k++)
    {
        if((q[i]>>k&1)) {
                sum[l[i]][k]++,sum[r[i]+1][k]--;
        }
    }

    }

    /// which which bit is on which which position 
    for(int i=1;i<=n;i++)
    {
        for(int bit=0;bit<=30;bit++)
        {
            sum[i][bit]+=sum[i-1][bit];
            times[i][bit]=times[i-1][bit]+(sum[i][bit]>0);
        }
    }

    /// it check that the number of bits should be on upon the value q[i] 
    for(int i=1;i<=m;i++)
    {
        for(int bit=0;bit<=30;bit++)
        {
            int this_bit=(times[r[i]][bit]-times[l[i]-1][bit]==(r[i]-l[i]+1));

            if(this_bit!=(q[i]>>bit&1))
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }

    /// then add the 2^bit on particular position if bit is on upon that position 
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
    {
        int nm=0;
        for(int bit=0;bit<=30;bit++)
        {
            if(sum[i][bit]>0) nm|=(1<<bit);
        }
        cout<<nm<<" ";
    }


    return 0;
}
