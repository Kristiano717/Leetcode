class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        queue<char>q;
        unordered_set<char>st;
        int maxL=0;
        
        for (char c : s)
        {
            while(st.find(c)!=st.end())
            {
                st.erase(q.front());
                q.pop();
            }
        q.push(c);
        st.insert(c);
        maxL=max(maxL , (int)q.size());
    
        }
        return maxL;

    }
};