class Solution {
public:
    string tmp="";
    vector<string> what = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve(vector<string>&ans,int index,int sz,string digits)
    {
        if(index==digits.size())
        {
            ans.push_back(tmp);
            return;
        }
        
        for(auto str:what[digits[index]-'2'])
        {
            tmp.push_back(str);
            solve(ans,index+1,sz,digits);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0) return ans;
        int sz=digits.size();
        solve(ans,0,sz,digits);
        return ans;
    }
};