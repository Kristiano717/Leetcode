class Solution {
public:
    string reverseOnlyLetters(string s) {
        string letters;

        for (char c : s)
        {
            if(isalpha(c))

            {
                letters+=c;
            }
        }
        reverse(letters.begin(), letters.end());
    
    
        //put the reversed index back
        int idx=0;
        for(int i =0;i<s.size();i++)
        {
            if(isalpha(s[i]))
            {
            s[i]=letters[idx++];
        }
        }
        return s;
    }

};