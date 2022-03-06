class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        unordered_set<int>st(nums.begin(),nums.end());
        nums.clear();
        for(auto it:st)
            nums.push_back(it);
        sort(nums.begin(),nums.end());
        long long ans=k;
        int cpy=k;
        ans*=(k+1);
        ans/=2;
        for(int i=0;i<nums.size();i++)
        {   
            if(nums[i]<=k){
            ans-=nums[i];
            ans+=(k+1);
            k++;}
            else
                break;
        }
        return ans;
    }
};