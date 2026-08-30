class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minidx = 0;
        int maxidx = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[minidx]) {
                minidx = i;
            }
            if (nums[i] > nums[maxidx]) {
                maxidx = i;
            }
        }
        int minimum = min(minidx, maxidx);
        int maximum = max(minidx, maxidx);
        int front = maximum + 1; // deelte from the front only untill u remove
                                 // to the farther elemenrt
        int back = nums.size() - minimum;
        int both = (minimum + 1) + (nums.size() - maximum);
        return min({front, back, both});
    }
};