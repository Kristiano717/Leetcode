class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int low = 0;
        int res = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return true;
            }

            // checking this one classical edge case which i didnt check in the
            // problem before this.

        if(nums[low]==nums[mid] && nums[mid]==nums[high])
        {
            high--;
            low++ ;
            continue;
        } // checking if the left part is sorted.
        if (nums[low] <= nums[mid])
         {
            if (nums[low] <= target && nums[mid] >= target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }

        }

        else {
            if (nums[mid] < /*==*/target && nums[high] >= target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        }
        return false;
    }
};