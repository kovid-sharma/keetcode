class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort of selection sort
        //choose three pointer and 1 value is where it should be only 2 and 0 are misplaced 
        int p_zero=0,p_one=0,p_two=nums.size()-1;
        if(p_two==0)return;
        while(p_one<=p_two)
        {
            if(nums[p_one]==1)
                p_one++;
            else if(nums[p_one]==0)
            {   
                //inplace swap without new int
                nums[p_zero]+=nums[p_one];
                nums[p_one]=nums[p_zero]-nums[p_one];
                nums[p_zero]-=nums[p_one];
                p_one++;
                p_zero++;
            }
            else    //nums[p_one]must be 2;
            {   
                //inplace swap 
                nums[p_one]=nums[p_two];
                nums[p_two]=2;
                p_two--;
            }
        }
    }
};