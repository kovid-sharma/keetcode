class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int rt=0,res=0;
        for(int i=0;i<s.length();i++){
            
            if (mp.find(s[i]) != mp.end() and mp[s[i]]>=rt)
                 rt = mp[s[i]] + 1;
            
            mp[s[i]] = i;
            res=max(res,i-rt+1);
        }
        
        return res;
    }
};