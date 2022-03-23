class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size()-1;
        int l=0;
        vector<int>ans(n+1,0);
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(abs(nums[n])>abs(nums[l])){
                ans[i]=nums[n]*nums[n];
                n--;
            }
            else{
                ans[i]=nums[l]*nums[l];
                l++;
            }
        }
        return ans;
    }
};