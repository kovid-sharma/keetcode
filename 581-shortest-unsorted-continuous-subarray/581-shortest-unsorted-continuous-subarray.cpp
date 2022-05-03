class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>ncp=nums;
        sort(nums.begin(),nums.end());
        int st=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==ncp[i])
                continue;
            else
            {
                st=i;
                break;
            }
        }
        if(st==-1)
            return 0;
        int en=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==ncp[i])
                continue;
            else{
                en=i;
                break;
            }
        }
        
        return en-st+1;
    }
};