class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size();
        int n=s2.size();
        if(m>n)return false;
        vector<int>str1(26,0);
        vector<int>tmp(26,0);
        for(int i=0;i<m;i++){
            str1[s1[i]-'a']++;
            tmp[s2[i]-'a']++;
        }
        if(tmp==str1)return true;
        for(int i=1;i<=n-m;i++)
        {
            tmp[s2[i-1]-'a']--;
            tmp[s2[i+m-1]-'a']++;
            if(tmp==str1)
                return true;
        }
        return false;
    }
};