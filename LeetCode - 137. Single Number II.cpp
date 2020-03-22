class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n= nums.size();
        for(int i=0;i<32;i++)
        {
            int cnt_bit=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]&(1<<i))
                {
                    cnt_bit++;
                }
            }
            if( cnt_bit>=3 &&cnt_bit%3!=0)
            {
                ans=ans|((1<<i));
            }
            else if(cnt_bit!=0&&cnt_bit<3)
            {
                ans=ans|((1<<i));
            }
        }
        return ans;
    }
};
