class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(t.begin(),t.end());
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(t[i]!=s[i])
            return t[i];
        }
        return t[s.size()];
    }
};