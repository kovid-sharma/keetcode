class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int cnt=0;
        bool st=true;
        int fin=0;
        for(int i=0;i<nums.size();i++)
        {
            while(i+1<nums.size() and nums[i]==nums[i+1] and st)
            {
                i++;
                cnt++;
            }
            st=!st;
            fin++;
        }
        if(fin%2)
            cnt++;
        return cnt;
        
    }
};