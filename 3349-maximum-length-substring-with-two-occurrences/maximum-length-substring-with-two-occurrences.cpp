class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int , int> mpp;
        int i =0;
        int j=0;
        int n =s.size();
        int ans=0;

        while(i<n)
        {
            mpp[s[i]]++;
            while(mpp[s[i]]>2)
            {
                mpp[s[j]]--;
                j++;
            }
            ans=max(ans , i-j+1);
            i++;
        }
        return ans;
    }
};