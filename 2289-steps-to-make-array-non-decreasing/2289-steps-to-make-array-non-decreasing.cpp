class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<pair<int,int>>st;
        st.push({nums[0],0});
        //stack has the array element and the number of steps to remve it.
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {   
            int step=0;
            while(!st.empty() and st.top().first<=nums[i])
            {
                step=max(st.top().second,step);
                st.pop();
            }
            if(st.empty())
                step=0;
            else
                step++;
            st.push({nums[i],step});
            ans=max(ans,step);
        }
        return ans;
        
    }
};

        