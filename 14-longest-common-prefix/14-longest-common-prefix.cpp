class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string add;
        if(strs.size()==1)return strs[0];
        sort(strs.begin(),strs.end(),mycmp);
        for(int i=0;i<strs[0].size();i++)
        {   
            char now=strs[0][i];
            for(auto st:strs){
                if(st[i]!=now)
                    return add;
            }
            add+=now;
        }
        return strs[0];
        
    }
    static bool mycmp(string a,string b){
        return a.size()<b.size();
    }
};