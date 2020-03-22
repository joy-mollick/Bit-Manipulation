class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        long ans=0;
        int n=nums.size();
        for(int j=0;j<32;j++)
        {
            int cont=0;
            int nn=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]&(1<<j))
                {
                    cont++;
                }
                nn=n-cont;
            }
            ans=ans+(nn*cont);
        }
        return ans;
    }
};
