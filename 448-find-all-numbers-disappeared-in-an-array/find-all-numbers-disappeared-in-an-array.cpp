class Solution {// I HAVE ALSO THE O(1) SOLTUION IN SUBMISSIONS.
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;

        for (int x : nums) {
            st.insert(x);
        }

        vector<int> result;

        for (int i = 1; i <= n; i++) {
            if (st.find(i) == st.end()) {
                result.push_back(i);
            }
        }

        return result;
    }
};