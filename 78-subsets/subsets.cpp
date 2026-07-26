class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result = {{}};

        for ( int num:nums)
        {
            int current =result.size();

            for ( int i=0;i<current;i++)
            {
                vector<int> newsubset=result[i];
                newsubset.push_back(num);
                result.push_back(newsubset);
            }

        }

        return result;
    }

};