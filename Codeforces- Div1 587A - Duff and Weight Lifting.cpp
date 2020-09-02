
/// Codeforces- Div1 587A - Duff and Weight Lifting.
/// Category: greedy + data structure (medium).


/// 2^i-1 + 2^i-1 = 2^i
/// 2^i-1 + 2^i-1 + 2^i-1 +2^i-1 = 2^i + 2^i = 2^i+1

/// So every time , half of current will make impact of next bit
/// in such way ,next when count will be odd ,take that into account.

#include<bits/stdc++.h>

using namespace std;

const int mx=2000001;

int cont[mx];

int main()

{
    int n,w;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&w);
        cont[w]++;
    }

    int ans=0;
    for(int i=0;i<mx;i++)
    {
        /// this bit will be taken
        if(cont[i])
        {
        ///how many numbers are on that bit (i+1),half of previous one.
            cont[i+1]+=(cont[i]>>1);
            if(cont[i]&1) cont[i]=1;
            else cont[i]=0;
        ///if numbers of ith bit is odd, so this number has to be taken separately alone
            if(cont[i]==1) ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
