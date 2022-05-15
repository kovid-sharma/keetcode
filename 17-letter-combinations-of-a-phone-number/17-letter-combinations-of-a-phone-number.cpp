class Solution {
public:
    vector<string>use;
    void solve(int i,vector<string>&ans,string &dig,string &tmp)
    {
        if(i==dig.size())
        {
            ans.push_back(tmp);
            return;
        }
        for(auto ch:use[dig[i]-'2'])
        {
            tmp.push_back(ch);
            solve(i+1,ans,dig,tmp);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0)
            return ans;
        string tmp;
        
        use.push_back("abc");
         use.push_back("def");
         use.push_back("ghi"); use.push_back("jkl"); use.push_back("mno");
         use.push_back("pqrs");use.push_back("tuv");use.push_back("wxyz");
        solve(0,ans,digits,tmp);
        return ans;
    }
};