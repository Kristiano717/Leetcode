class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string ,vector<string>> mp;

        for (int i =0;i<strs.size();i++)
        {
         //temp string
         string s =strs[i];
         sort(s.begin(),s.end());


        //comapring the values of whatever we have in th3e curent string "s
        //with the key
        mp[s].push_back(strs[i]);

        //the pushback value creates a new array which is not oeprated by usd , and ineastd stores the old value of the strs[i]
        //hence whenever we used particualr line of code -> we do uderstadn that mp[s]=the sorted value which in our case "aet" and we keep its valued with the key... the original valeu "eat".
        }

        vector<vector<string>> answer(mp.size());
        //which is dyanamic the size is dynamic.


        int idx=0;
        for(auto x : mp)
        {
            auto temp = x.second;
            for(auto x : temp)
            {
                answer[idx].push_back(x);
            }
            idx++;
        }
        return answer;
    }
    
};