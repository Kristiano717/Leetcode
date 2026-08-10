class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        int cnt = 0;
        if (len == 1) {
            return true;
        }
        for (int i = 0; i < len; i++) {
            if (isupper(word[i])) {
                cnt++;
            }
        }
        if (cnt == 1 && isupper(word[0])) {
            return true;
        }//if everything is capital then also true , if everything is small also true 
        if(cnt==0 || cnt==len)
        {
            return true;
        }
        else return false;

    }
};