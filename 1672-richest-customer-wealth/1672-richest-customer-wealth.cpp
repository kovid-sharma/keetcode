class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0;
        for(auto it:accounts){
            int start=0;
            for(auto inside:it){
                start+=inside;
            }
            max_wealth=max(max_wealth,start);
        }
        return max_wealth;
    }
};