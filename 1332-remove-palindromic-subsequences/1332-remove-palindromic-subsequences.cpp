class Solution {
public:
    int removePalindromeSub(string s) {
        int l=0;
        int r=s.size()-1;
        while(r>=0 and l<s.size())
        {
            if(l>=r)
                return 1;
            if(s[l++]==s[r--]){}
            else
                break;
        }
        return 2;//remove all b
    }
};