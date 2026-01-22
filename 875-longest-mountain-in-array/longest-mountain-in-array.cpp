class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        if (n<3)
        {
            return 0;
        }
        int  up = 0;
        int down = 0;
        int ans = 0;
        for (int i=1;i<n;i++)
        {   //flathill or new uphill or more downhill
            if ( arr[i]==arr[i-1] || down>0 && arr[i]>arr[i-1] )
            {
                up=down=0;
            }
            //uphill
            if(arr[i]>arr[i-1])
            {
                up++;
            }
            //downhill
            if(arr[i]<arr[i-1])
            {
                down++;
            }

        //chekcing validity
        if (up > 0 && down > 0) {
                ans = max(ans, up + down + 1);
            }

        }
        return ans;
    }
};