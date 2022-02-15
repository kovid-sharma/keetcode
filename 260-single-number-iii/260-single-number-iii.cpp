class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int zero=0;
        for(auto it:nums)
            zero^=it;
        int setidx=0;
        for(int i=0;i<32;i++)
        {
            if(zero & (1<<i))
            {
                setidx=i;break;
            }
        }
        int one=0,two=0;
        for(auto it:nums)
        {
            if(it & (1<<setidx))
                one=one xor it;
        }
        two=zero xor one;
        return {one,two};
        
    }
};