class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int  maxcount=0;
        int current = 0;
        for (int i =0 ;i<nums.size();i++)
        {
            if (nums[i]==1){
            current++;
            
            maxcount=max(maxcount,current);
            }
            else
            {
                current=0;
            }
        }
        return maxcount;
    }
};