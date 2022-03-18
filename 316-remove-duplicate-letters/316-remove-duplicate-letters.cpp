class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>inadd(26,false);
        vector<int>freq(26,0);
        for(int i=0;i<s.size();i++)
            freq[s[i]-'a']++;
        string res;
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'a']--;
            if(inadd[s[i]-'a'])continue;
            while(!res.empty() and res.back()>s[i] and freq[res.back()-'a']>0)
            {
                inadd[res.back()-'a']=false;
                res.pop_back();
            }
            res.push_back(s[i]);
            inadd[s[i]-'a']=true;
        }
        return res;
    }
};