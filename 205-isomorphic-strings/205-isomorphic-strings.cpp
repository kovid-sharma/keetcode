class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mp;
        unordered_set<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp.insert({s[i],t[i]-s[i]});
                if(st.find(t[i])!=st.end())
                    return false;
                st.insert(t[i]);
            }
            else
            {
                if(t[i]-s[i]!=mp[s[i]])
                    return false;
            }
            
        }
        return true;
    }
};