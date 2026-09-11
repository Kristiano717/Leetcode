class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> seen;
        int n = digits.size();

        for (int a = 0; a < n; a++) {
            if (digits[a] == 0) {
                continue;
            }
            for (int b = 0; b < n; b++) {
                if (a == b) {
                    continue;
                }
                for( int c =0;c<n;c++)
                {
                    if(a==c || b==c)
                    {
                        continue;
                    }
                    if(digits[c]%2!=0)
                    {
                        continue;
                    }
                    int num = digits[a]*100+digits[b]*10+digits[c];
                    seen.insert(num);
                }

            }
        }
        return seen.size();
    }
};