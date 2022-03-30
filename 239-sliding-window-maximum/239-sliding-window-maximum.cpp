class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        priority_queue<pair<int,int>>pqi;
        vector<int>ans;
        while(right<nums.size())
        {
            pqi.push(make_pair(nums[right],right));
            if(right-left+1<k)
            {
                right++;
                continue;
            }
            if(right-left+1==k)
            {
                while(pqi.top().second<left)
                    pqi.pop();
                ans.push_back(pqi.top().first);
                left++;right++;
            }
        }
        return ans;
    }
};