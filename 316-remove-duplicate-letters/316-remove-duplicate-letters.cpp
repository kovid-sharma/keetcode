class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool>present(26,false);
        vector<int>charfreq(26,0);
        for(auto &it:s)
            charfreq[it-'a']++;
        string res;
        for(auto it:s)
        {   
            charfreq[it-'a']--;
            if(present[it-'a'])continue;
            while(!res.empty() and res.back()>it and charfreq[res.back()-'a']>0)
            {
                
                present[res.back()-'a']=false;
                res.pop_back();
            }
            res.push_back(it);
            present[it-'a']=true;
        }
        return res;
    }
};