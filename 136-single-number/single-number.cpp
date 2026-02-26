class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int i;
        for (int i =0;i<nums.size();i++)
        {
            ans ^= nums[i];
        }
        return ans;
    }
};