class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
            p.push_back(make_pair(nums[i], i));
        sort(p.begin(),p.end());
        int i=0,j=n-1;
        while(i<j)
        {
            if(p[i].first+p[j].first>target)
                j--;
            else if(p[i].first+p[j].first<target)
                i++;
            else
                break;       
        }
        return {p[i].second,p[j].second};
    }
};