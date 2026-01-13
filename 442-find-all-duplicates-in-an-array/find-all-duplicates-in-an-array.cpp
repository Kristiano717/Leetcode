class Solution {
public:
    vector<int>result;
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        for (int i=0;i<n;i++)
        {
          int x = abs(nums[i])-1;

          if (nums[x]<0){
          
         result.push_back(x + 1);

        }
        else {
            nums[x]=-nums[x];

        }
        }
        return result;
    }
};