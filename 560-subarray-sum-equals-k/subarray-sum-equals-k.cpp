class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
   
       //i didnt know the prefix algorthim or the hash maps so yeah this is the brut force soln of o(n2)
int count=0;
    
        for(int i =0;i<nums.size();i++)
        {    int sum=0;
          
            for(int j=i;j<nums.size();j++)
            {
               
                 sum+=nums[j];
                if (sum==k)
                {
                    count++;
                }

             
            }

     
    
        }
               return count;
    }
    
};