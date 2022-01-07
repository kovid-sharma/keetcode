class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(++m[nums[i]]>n/3)ans.push_back(nums[i]),m[nums[i]]=INT_MIN;
        }
        return ans;
    }
};