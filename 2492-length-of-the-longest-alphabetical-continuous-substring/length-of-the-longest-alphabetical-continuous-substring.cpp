class Solution {
public:
    int longestContinuousSubstring(string s){
    int curr=1;
    int solution=1;
     for (int i =1; i<s.size();i++)
      {
        if(s[i]!='0' && s[i]==s[i-1]+1 )
        {
            curr++;
        }
        else curr=1;
      
        solution=max(curr,solution);
      }    
        
        return solution;
  
}
};