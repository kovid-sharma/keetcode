class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int target= -1*(nums[i]);
            int st=i+1;
            int en=n-1;
            while(st<en)
            {
                int sum= nums[st]+nums[en];
                if(sum<target)
                    st++;
                else if(sum>target)
                    en--;
                else
                {
                    vector<int>now(3);
                    now[0]=nums[i];
                    now[1]=nums[st];
                    now[2]=nums[en];
                    ans.push_back(now);
                    while(st<en and nums[st]==now[1])
                        st++;
                    while(st<en and nums[en]==now[2])
                        en--;
                }
            }
            while(i+1<n and nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};