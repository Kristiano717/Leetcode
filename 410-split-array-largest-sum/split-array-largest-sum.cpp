class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if( k>nums.size())
        return -1;

        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);//needs a starting value.

        while(low<high)
        {
            int mid= (high-low)/2+low;
            if ( cansplit(nums , mid , k))
            {
                high=mid;
            }
            else
            {
                low=mid+1;
            }

        }
        return low;
    }
    bool cansplit(vector<int>&nums,int limitsum , int k)
    {
        int n = nums.size();
        int currsum=0;
        int splitcount=1;
    for ( int i=0;i<n;i++)
    {
        if(currsum+nums[i]<=limitsum)
        {
            currsum+=nums[i];
        }
        else
        {
            currsum=nums[i];
            splitcount++;
        }
    }
        return splitcount<=k;
    
    }


};