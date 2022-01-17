class Solution {
public:
    bool canJump(vector<int>& nums) {
         int n=nums.size();
        if(n==1)return true;
         int indx=0;
        for(int i=0;i<=indx;i++)
        {
            if(i>=n)
                return true;
            indx=max(indx,i+nums[i]);
        }
        return indx>=n-1;
    }
};