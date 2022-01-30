class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>tmp;
        //not inplace brute
        int n=nums.size();
        if(n==1) return;
        k=k%n;
        n=n-k;
        for(int i=n;i<nums.size();i++)
            tmp.push_back(nums[i]);
        for(int i=0;i<n;i++)
            tmp.push_back(nums[i]);
        for(int i=0;i<nums.size();i++)
            nums[i]=tmp[i];
    }
};