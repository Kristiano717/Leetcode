class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        int n = nums.size();

        // Step 1: Separate
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        // Step 2: Merge alternately
        int i = 0, p = 0, q = 0;

        while (p < pos.size() && q < neg.size()) {
            nums[i++] = pos[p++];
            nums[i++] = neg[q++];
        }

        // Step 3: Remaining
        while (p < pos.size()) nums[i++] = pos[p++];
        while (q < neg.size()) nums[i++] = neg[q++];

        return nums; // ✅ inside function
    }
};