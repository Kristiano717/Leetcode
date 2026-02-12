class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long total = 0; // Use long long to prevent overflow
        int left = 0;
        int maxFreq = 0;

        for (int right = 0; right < nums.size(); right++) {
            total += nums[right];

            // If the cost to make all elements in the window equal to nums[right] 
            // exceeds k, shrink the window from the left.
            while ((long long)nums[right] * (right - left + 1) - total > k) {
                total -= nums[left];
                left++;
            }

            // Update the maximum frequency found so far
            maxFreq = max(maxFreq, right - left + 1);
        }

        return maxFreq;
    }
};