class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       unordered_map<string,int> wrd1;
        unordered_map<string,int> wrd2;
        int ret=0;
        for(auto&it: words1)
            wrd1[it]++;
        for(auto &it:words2)
            wrd2[it]++;
        for(auto&it:wrd1)
        {
            if(it.second==1 and wrd2[it.first]==1)
                ret++;        
        }
        return ret;
    }
};