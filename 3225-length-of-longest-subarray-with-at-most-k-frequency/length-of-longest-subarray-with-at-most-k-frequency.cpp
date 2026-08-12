class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int , int >mpp;
        int result=0;
        int n =nums.size();
        int i=0;
        int j=0;//this is the left pointer which is axed.
        while( i<n)
        {
            mpp[nums[i]]++;
            //to remember this question has the issue the it removes the numbers of the left pointer even if its not violating any logic.

            while(mpp[nums[i]]>k)
            {
                mpp[nums[j]]--;
                j++;//classic sldiding window approach.

            }
            result=max(result , i-j+1);
            i++;
           
        }
        return result;

    }
};