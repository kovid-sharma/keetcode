class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)return;
        int n=nums.size();
        int to_swap;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                to_swap=i;break;
            }
            if(i==0)
            {
                reverse(nums.begin(),nums.end());return;
            }
            
        }
        int to_swap_2;
        for(int i=n-1;i>to_swap;i--)
        {
            if(nums[i]>nums[to_swap]){
                to_swap_2=i;break;
            }
        }
        swap(nums[to_swap],nums[to_swap_2]);
        reverse(nums.begin()+to_swap+1,nums.end());
        
    }
};
/*void nextPermutation(vector<int>& nums) {
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
        
    }*/