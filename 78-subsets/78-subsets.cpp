class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>input,vector<int>output)
    {
        if(input.size()==0)
        {
            ans.push_back(output);return;
        }
        vector<int>take=output,no=output;
        take.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,take);
        solve(input,no);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums,{});
        return ans;
    }
};