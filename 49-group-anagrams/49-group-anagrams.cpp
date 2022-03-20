class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ret;
        unordered_map<string,vector<string>>smain_all;
        for(auto str:strs)
        {
            string temp=str;
            sort(temp.begin(),temp.end());
            smain_all[temp].push_back(str);
        }
        for(auto it:smain_all)
        {
            ret.push_back(it.second);
        }
        return ret;
    }
};