class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
            int now=nums[i];
            if(nums[abs(now)-1]<0){
                continue;
            }
            else{
                nums[abs(now)-1]*=-1;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            arr.push_back(i+1);
        }
        return arr;
    }
};