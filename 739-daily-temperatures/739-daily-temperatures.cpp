class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int>ans(n);
        stack<pair<int,int>>st;
        st.push({t[0],0});
        for(int i=1;i<t.size();i++)
        {
            if(st.empty())
            {
                st.push({t[i],i});
                continue;
            }
            while(!st.empty() and st.top().first<t[i])
            {   
                ans[st.top().second]=i-st.top().second;
                st.pop();
            }
            st.push({t[i],i});
        }return ans;
    }
};