class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        if(n<3)return 0;
        int curlen=0;
        for(int i=0;i<=n-3;i++)
        {
            curlen=0;
            int diff= nums[i+1]-nums[i];
            int j= i+2;
            while(j<n and nums[j]-nums[j-1]==diff)
            {
                curlen++;
                j++;i++;
            }
            int add= (curlen)*(curlen+1);
            add/=2;
            sum+=add;
            
        }
        return sum;
    }
};