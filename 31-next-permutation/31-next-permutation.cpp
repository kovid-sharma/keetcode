class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return;
       int leftmost;
        int i;
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                leftmost=i;
                break;
            }
            if(i==0)
            {
                reverse(nums.begin(),nums.end());return;
            }
        }
        
        int rightofleft;
        for(i=nums.size()-1;i>leftmost;i--)
        {
            if(nums[i]>nums[leftmost]){
                rightofleft=i;
                break;
            }
        }
        swap(nums[leftmost],nums[rightofleft]);
        reverse(nums.begin()+leftmost+1,nums.end());
        
    }
};