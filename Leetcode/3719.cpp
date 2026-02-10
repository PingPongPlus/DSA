class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            unordered_set<int> Set;
            int counterEven = 0;
            int counterOdds = 0;
            for(int j = i; j < n; j++){
                if(Set.find(nums[j]) == Set.end()){
                    Set.insert(nums[j]);
                    if(nums[j] % 2 == 0){
                        counterEven++;
                    }else counterOdds++;
                }
                if(counterOdds == counterEven){
                    res = max(res, j-i+1);
                }
            }
        }
        return res;
    }
};