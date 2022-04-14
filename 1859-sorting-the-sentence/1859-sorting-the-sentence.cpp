class Solution {
public:
    static bool mycomp(string a,string b)
    {
        char a_last=a.back();
        char b_last=b.back();
        return a_last<b_last;
    }
    string sortSentence(string s) {
        vector<string>vs;
        string tmp;
        for(auto &it:s)
        {   
            if(it==' ')
            {
                vs.push_back(tmp);
                tmp.clear();
                continue;
            }
            tmp.push_back(it);
        }
        vs.push_back(tmp);
        sort(vs.begin(),vs.end(),mycomp);
        string res;
        for(auto &it:vs)
        {   
            it.pop_back();
            res+=it;
            res+=' ';
        }
        res.pop_back();
        return res;
    }
};