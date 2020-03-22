class Solution {
public:
    int integerReplacement(int n) {
        long long N=(long long)n;
        int ans=0;
        while(N!=1)
        {
            if((N&1)==0)
            {
                N=N>>1;
            }
            else if(N==3||__builtin_popcount(N-1)<__builtin_popcount(N+1))
            {
                N--;
            }
            else
            {
                N++;
            }
            ans++;
        }
        return ans;
    }
};
