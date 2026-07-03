class Solution {
public:
    int maxArea(vector<int>& height) {
        int area;
        int ans=0;
        int n=height.size();
        int left= 0;
        int right =n-1;
       
        while(left<right)
        {
         int width=right-left;
         //height to be calculated,
        int baseline=min(height[right],height[left]);
        area=(width * baseline);
        ans=max(ans,area);
        //updating mx area
        if(height[left]<height[right])
        {
            left++;

        }
        else{
            right--;
        }


        
        }
        return ans;
    }
};