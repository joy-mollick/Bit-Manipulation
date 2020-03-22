class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int two_num_xor=0;
        for(int i=0;i<nums.size();i++)
        {
            two_num_xor=two_num_xor^nums[i];
        }
        int number_last_set_bit=two_num_xor&(-two_num_xor);
        int x=0;
        int y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&number_last_set_bit)
            {
                x=x^nums[i];
            }
            else
            {
                y=y^nums[i];
            }
        }
        vector<int>ans;
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};
