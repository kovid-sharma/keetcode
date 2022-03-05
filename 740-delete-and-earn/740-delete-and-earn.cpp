class Solution {
public:
    const int maxF=1e4;
    int deleteAndEarn(vector<int>& nums) {
        vector<int>A(maxF,0);
        for(int i=0;i<nums.size();i++)
        {
            A[nums[i]-1]++;
        }
        int exc=0;int inc=0;
        for(int i=0;i<A.size();i++)
        {
            int newin= exc+ A[i]*(i+1);
            int newex= max(exc,inc);
            inc=newin;
            exc=newex;
        }
        return inc;
    }
};