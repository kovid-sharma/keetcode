class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int begin=0;
        int numz=0;
        int end=0;
        for(end=0;end<nums.size();end++)
        {
            if(nums[end]==0)
                numz++;
            
            if(numz>k)
            {   
                if(nums[begin]==0)
                    numz--;
                begin++;
            }   
        }
        return (end-begin);
    }
};