class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxsubarr=nums[0];
       int currsubarr=nums[0];
       for (int i = 1; i < nums.size(); i++)
        {
            currsubarr=max(nums[i],currsubarr+nums[i]);
            maxsubarr=max(maxsubarr , currsubarr);


        }
        return maxsubarr;

    }
};