class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> answer (n);
        int pos = 0;
        int negative = 1;

        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                answer[pos] = nums[i];
                pos += 2;
            }
            else{
                answer[negative] = nums[i];
                negative += 2;
            }
        }
        return answer;
    }
};