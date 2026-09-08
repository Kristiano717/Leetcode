class Solution {
public:
    int countCommas(int n) {
        int count =0;
        for ( int i =0;i<=n;i++)
        {
            if(i>=1000)
            {
                count++;
            }
        }
        return count;
    }
};// evey number from 1000 to n will have 1 comma for sure.
//how many numbers in range 1-n are atleast 1000,