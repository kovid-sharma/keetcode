class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //orignal kadane's algorithm 
        int runSum=0;
        int maxTillNow=INT_MIN;
        for(auto it:nums)
        {
            runSum=max(it,runSum+it);
            maxTillNow=max(maxTillNow,runSum);
        }
        return maxTillNow;
    }
};