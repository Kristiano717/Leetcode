class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        int n = nums.size();

        
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        
        int i = 0, p = 0, q = 0;

        while (p < pos.size() && q < neg.size()) {
            nums[i++] = pos[p++];
            nums[i++] = neg[q++];
        }

       
        while (p < pos.size()) nums[i++] = pos[p++];
        while (q < neg.size()) nums[i++] = neg[q++];

        return nums; 
    }
};