class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(s.size()<k)return s;
        stack<pair<int,int>>st;
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() and s[st.top().first]==s[i])
            {
                st.top().second++;
                if(st.top().second==k)
                    st.pop();
            }
            else
            {
                st.push({i,1});
                if(st.top().second==k)//in caase k is actually 1
                    st.pop();
            }
        }
        string ret;
        while(!st.empty())
        {
            int num=st.top().second;
            for(int i=0;i<num;i++)
            {
                ret.push_back(s[st.top().first]);
            }
            st.pop();
        }
       
        reverse(ret.begin(),ret.end());
        return ret;
    }
};