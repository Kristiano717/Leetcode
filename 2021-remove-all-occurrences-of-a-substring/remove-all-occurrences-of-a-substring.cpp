class Solution {
public:
    string removeOccurrences(string s, string part) {
        //remove all the occureences in substring of noit single indivual chacraterf but  as word .
        while (s.length()>0 &&  s.find(part)<s.size())
        {
            s.erase(s.find(part),part.size());
        }
        return s;
    }
};