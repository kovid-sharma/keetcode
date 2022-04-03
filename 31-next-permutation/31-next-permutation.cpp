class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return;
        int left;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1]){
                left=i;break;}
            if(i==0){
                reverse(nums.begin(),nums.end());return;}
        }
        int rght;
        for(int i=n-1;i>left;i--)
        {
            if(nums[i]>nums[left]){
                rght=i;break;
            }
        }
        swap(nums[left],nums[rght]);
        reverse(nums.begin()+left+1,nums.end());
    }
};