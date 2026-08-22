class Solution {
public:
    bool isAnagram(string s, string t) {
        //trick here is to revser the string , how do we revrse string?
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};