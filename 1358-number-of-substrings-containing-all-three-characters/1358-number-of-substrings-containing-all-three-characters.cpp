class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int ans=0;
        int idx=0;
        vector<int>hash(3,0);
        while(idx<s.size())
        {     
            hash[s[idx]-'a']++;
            while(hash[0] and hash[1] and hash[2]){
                hash[s[i]-'a']--;
                i++;
            }
            idx++;
            ans+=i;
        }
        return ans;
    }
};