class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        /* if alice gives a and recivees be from bob , then newsuma=suma-a+b and
         * newsumb=sumb-b+a*/
    vector<int>result;
        int alicetotal = 0;
        int bobtotal = 0;
        int sum1, sum2;

        for (int i : aliceSizes) {
            alicetotal += i;
        }
        for (int i : bobSizes) {
            bobtotal+=i;
        }

        int m = aliceSizes.size() , n = bobSizes.size();
        for ( int i=0;i<m;i++)
        {
            for (int j =0;j<n;j++)
            {
                if (alicetotal-aliceSizes[i] + bobSizes[j]==(bobtotal-bobSizes[j]+aliceSizes[i]))
                   { 
                    result.push_back(aliceSizes[i]);
                    result.push_back(bobSizes[j]);
                   return result;
                   }
            }

        }
        return result;
    }
};