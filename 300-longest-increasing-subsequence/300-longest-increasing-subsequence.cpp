class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>ret;
        for(int i=0;i<n;i++)
        {
            if(ret.empty())
                ret.push_back(nums[i]);
            if(ret.back()>=nums[i])
            {
                auto it=lower_bound(ret.begin(),ret.end(),nums[i])-ret.begin();
                ret[it]=nums[i];
            }
            else
                ret.push_back(nums[i]);
        }
        return ret.size();
    }
};
/*
        for (int x : nums) {
            if (sub.empty() || sub[sub.size() - 1] < x) {
                sub.push_back(x);
            } else {
                auto it = lower_bound(sub.begin(), sub.end(), x); // Find the index of the smallest number >= x
                *it = x; // Replace that number with x
            }
        }
        return sub.size();
    }*/