class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int > ans;
        int n = nums.size();

        int start = nums[0];
        int end = nums[n-1];

        unordered_map<int , int> mpp;
        for ( int i =0; i< nums.size();i++)
        {
            mpp[nums[i]]; // this is the part whwere we intialeze everythign from ther certgain range to the , map
        }

        for ( int i =start; i<=end;i++)
        {
            if(mpp.find(i)==mpp.end()) // element not present in the map , mpp.end() bsascially means 0

            {
                ans.push_back(i);

            }


        }
        return ans;
    }
};