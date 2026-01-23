class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        int n = arr.size();
        int min_dif = INT_MAX;

        // Compute minimum difference
        for (int i = 0; i < n - 1; i++) {
            min_dif = min(min_dif, arr[i + 1] - arr[i]);
        }

        // Collect all pairs with that difference
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] == min_dif) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }

        return ans;
    }
};
