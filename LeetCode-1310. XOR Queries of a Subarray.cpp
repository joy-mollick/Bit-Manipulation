class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int xor_prefix[n+1];
         xor_prefix[0]=0;
        int xr=0;
        for(int i=1;i<=n;i++)
        {
            xr=xr^arr[i-1];
            xor_prefix[i]=xr;
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            l++;
            r++;
            int res=xor_prefix[r]^xor_prefix[l-1];
            ans.push_back(res);
        }
        return ans;
    }
};
