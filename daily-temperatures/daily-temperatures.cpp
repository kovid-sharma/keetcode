class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& ts) {
        //nge
        vector<int>ans(ts.size(),0);
        stack<pair<int,int>>st;
        st.push({ts[0],0});
        for (int i = 1; i < ts.size(); i++)
        {
            if (st.empty()) {
                st.push({ts[i],i});
                continue;
            }
            while (!st.empty()and st.top().first<ts[i])
          {     
                ans[st.top().second]=i-st.top().second;
                /*cout << s.top()
                 << " --> " << arr[i] << endl;*/
                st.pop();
           }
            st.push({ts[i],i});
 
        }
        return ans;}
};