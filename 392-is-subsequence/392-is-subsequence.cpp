class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pt=0;
        int ps=0;
        while(pt<t.size())
        {
            if(ps==s.size())
                return true;
            if(s[ps]==t[pt])
            {
                ps++;
                pt++;
            }
            else
            {
                pt++;
            }
        }
        if(ps==s.size())
            return true;
        return false;
    }
};