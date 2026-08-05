class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1;
    int high=*max_element(nums.begin(),nums.end());
    while(low<high)
    {
        int mid=low+(high-low)/2;

        if(helper(nums,mid)<=threshold)
        {
             high=mid;
        }
        else{
             low=mid+1;
        }
        
    }
        return low;
    }

    int helper(vector<int>&arr, int div) {
        int sum = 0;
        for (int n : arr) {
            sum += ceil(double(n) / div);
        }
        return sum;
    }
};