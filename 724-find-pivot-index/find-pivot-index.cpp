class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for( int i =0;i<nums.size();i++)
        {
            int left_sum=0;
            int right_sum=0;
//this is for calc sum ..i was for pivot only,
        for ( int j=0;j<i;j++)
        {
            left_sum=left_sum+nums[j];
        }//2 seprate one as one of the j runs checking the pne behind the the other j so that it dosent include it actually.
        for( int j=i+1;j<nums.size();j++)
        {
            right_sum+=nums[j];
        }
         
        if(left_sum==right_sum)
        {
            return i;
        }



        }
        return -1;
    }
};