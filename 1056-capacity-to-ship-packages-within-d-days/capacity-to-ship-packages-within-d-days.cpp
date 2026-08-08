class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int numdays = finddays(weights, mid);

            if (numdays <= days) {
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }

        return low;
    }


    int finddays(vector<int>&weights , int cap)
    {
        int days=1;
        int load=0;

        for(int i=0;i<weights.size();i++)
        {
            if (weights[i]+load>cap)
            {
                days++;
                load=weights[i];

            }
            else
            {
                load+=weights[i];
            }
        }
        return days;
    }
};