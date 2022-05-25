class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        //simply lis has to be 3
        int cnt=0;
        vector<int>path;
        for(auto it:nums)
        {
            if(path.empty())
            {
                cnt++;
                path.emplace_back(it);
                continue;
            }
            if(path.back()>=it)
            {
                auto gre=lower_bound(path.begin(),path.end(),it)-path.begin();
                path[gre]=it;
            }
            else
            {
                cnt++;
                if(cnt>=3)
                    return true;
                path.emplace_back(it);
            }
        }
        if(cnt>=3)
            return true;
        return false;
    }
};