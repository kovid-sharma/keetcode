class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int ansMax=INT_MIN;
        int tempAns=0;
        int Sum=0;
        for(int i=0;i<nums.size();i++)
        {
            tempAns+=(nums[i]*i);
            Sum+=nums[i];
        }
        // cout<<tempAns;
        ansMax=max(tempAns,ansMax);
        for(int i=nums.size()-1;i>=0;i--)
        {
            tempAns-=(nums[i]*(nums.size()-1));
            tempAns+=(Sum-nums[i]);
            // cout<<tempAns;
            ansMax=max(ansMax,tempAns);
        }
        return ansMax;
    }
};