class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int count = 0;

        while (right < nums.size()) {
            sum += (nums[right] % 2);
            while (sum > k) {
                sum -= (nums[left] % 2);
                left++;
            }
            count += (right - left + 1);
            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};