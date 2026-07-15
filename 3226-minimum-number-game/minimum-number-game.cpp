class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
       
         vector<int>arr;
        sort(nums.begin(),nums.end());
        for(int i =0;i<nums.size();i+=2)
        {
            //we have to make a new array using push_back()
            
            arr.push_back(nums[i+1]);
            arr.push_back(nums[i]);

        }
            return arr;
    }
};