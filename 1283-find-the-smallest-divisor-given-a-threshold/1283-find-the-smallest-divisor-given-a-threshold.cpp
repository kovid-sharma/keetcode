class Solution {
public:
    int rev(vector<int>nums,int kid)
    {
        int ret=0;
        for(auto it:nums)
        {
            if(it%kid==0)
            {
                ret+=it/kid;
            }
            else
            {
                ret+= it/kid;
                ret++;
            }
        }return ret;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lodiv=1;
        int hidiv= *max_element(nums.begin(),nums.end())+1;
        while(lodiv<=hidiv)
        {
            int middiv= lodiv+ (hidiv-lodiv)/2;
            if(rev(nums,middiv)>threshold)
            {
                lodiv=middiv+1;
            }
            else
            {   
                hidiv=middiv-1;
            }
        }
        return lodiv;
    }
};