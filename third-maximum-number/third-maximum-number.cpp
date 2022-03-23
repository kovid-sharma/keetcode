class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long m1=LLONG_MIN;
        long m2=LLONG_MIN;
        long m3=LLONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m1 or nums[i]==m2 or nums[i]==m3)continue;
            if(m1==INT_MIN or nums[i]>m1){
                m3=m2;
                m2=m1;
                m1=nums[i];
            }
            else if(m2==INT_MIN or nums[i]>m2){
                m3=m2;
                m2=nums[i];
            }
            else if(m3==INT_MIN or nums[i]>=m3){
                m3=nums[i];
            }
            
            
        }
        return m3==LLONG_MIN?m1:m3;
        
        
    }
};