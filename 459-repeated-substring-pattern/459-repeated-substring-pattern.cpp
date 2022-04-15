class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string res= s;
        res+=s;
        res=res.substr(1,s.size()*2-2);
        return res.find(s)!=-1;
    }
};