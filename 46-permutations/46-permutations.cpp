class Solution {
public:
    vector<vector<int>>ans;
    void permutte(vector<int>&nums){
        int leftmost;
        int i;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                leftmost=i;break;
            }
            if(i==0){
                reverse(nums.begin(),nums.end());return;
            }
        }
        int right;
        for(i=nums.size()-1;i>leftmost;i--){
            if(nums[i]>nums[leftmost]){
                right=i;
                break;
            }
        }
        swap(nums[leftmost],nums[right]);
        reverse(nums.begin()+leftmost+1,nums.end());
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            ans.push_back(nums);return ans;
        }
        if(n==2){
            ans.push_back(nums);
            swap(nums[0],nums[1]);
            ans.push_back(nums);return ans;
        }
        int fact=1;
        while(n>1){
            fact*=n;
            n--;
        }
        cout<<fact<<endl;
        while(fact--){
            ans.push_back(nums);
            permutte(nums);
        }
        return ans;
    }
};