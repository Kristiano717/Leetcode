class Solution {
public:
    int a(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> mpp;

        int l = 0;
        int r = 0;

        while (r < nums.size()) {
            mpp[nums[r]]++;

            while (mpp.size()> k) {
                mpp[nums[l]]--;

                if (mpp[nums[l]] == 0) {
                    mpp.erase(nums[l]);
                }

                l++;
            }
            count = count + (r - l + 1);
            r++;
        }
        return count;
    }
     int subarraysWithKDistinct(vector<int>& nums, int k) {
        return a(nums, k) - a(nums, k - 1);
     }
    };