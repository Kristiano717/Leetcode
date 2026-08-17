class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;

            if (count[num] == 2) {
                return num;
            }
        }

        return -1;
    }
};