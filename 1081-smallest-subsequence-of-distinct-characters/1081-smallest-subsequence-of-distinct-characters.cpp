class Solution {
public:
    string smallestSubsequence(string s) {
        string res;
        vector<int>freq(26,0);
        vector<bool>inadd(26,false);
        for(auto c:s)freq[c-'a']++;
        for(auto c:s)
        {
            freq[c-'a']--;
            if(inadd[c-'a'])continue;
            if(res.empty()){
                res.push_back(c);
                inadd[c-'a']=true;continue;
            }
            while(res.back()>c and freq[res.back()-'a']){
                if(res.empty())
                {
                   res.push_back(c);
                inadd[c-'a']=true;continue; 
                }
                inadd[res.back()-'a']=false;
                res.pop_back();
            }
            res.push_back(c);
            inadd[c-'a']=true;
        }
        return res;
    }
};