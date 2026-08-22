class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singledigit = 0;
        int doubledigit = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 10) {
                singledigit += nums[i];
            } else {
                doubledigit += nums[i];
            }
        }

        if (singledigit != doubledigit) {
            return true;
        } else {
            return false;
        }
    }
};