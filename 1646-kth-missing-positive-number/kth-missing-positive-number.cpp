class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0;
        int r=arr.size(); 

        while(l<r)
        {
            int m=(r-l)/2+l;

            if(arr[m]-1-m<k) //genuinely didnt know this formula
            {
                l=m+1;
            }
            else
            {
                r=m;
            }
        }  //
        return l+k;
        }
};