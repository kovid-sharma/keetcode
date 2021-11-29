class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l=nums.size();
        vector<int> ans;
        for(int i=0;i<2*l;i++)
        {
            ans.push_back(nums[i%l]);
        }
        return ans;
    }
};