class Solution {
public:
    int balancedStringSplit(string s) {
        int L = 0;
        int R = 0;
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                L++;
            } else {
                R++;
            }
                if (R == L){
                    count++;
            }
        }
        return count;
    }
};