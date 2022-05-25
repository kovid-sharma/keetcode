class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>path;
        int cnt=0;
        for(auto it:nums)
        {
            if(path.empty())
            {
                path.emplace_back(it);
                cnt++;
                continue;
            }
            if(path.back()>=it)
            {
                auto gre=lower_bound(path.begin(),path.end(),it)-path.begin();
                path[gre]=it;
            }
            else{
                cnt++;
                path.emplace_back(it);}
        }
        return cnt;
    }
};