class Solution {
public:
    bool can(string &snew,string &sub,vector<vector<bool>>&v)
    {
        for(int i=0;i<sub.size();i++)
        {
            if(v[sub[i]][snew[i]])
                continue;
            return false;
        }
        return true;
    }
    bool matchReplacement(string s, string sub, vector<vector<char>>& mappings) {
        //brute force is the solution !
        vector<vector<bool>>v(256,vector<bool>(256,false));
        for(int i=0;i<256;i++)
            v[i][i]=true;
        for(auto two:mappings)
            v[two[0]][two[1]]=true;
        for(int i=0;i<=s.size()-sub.size();i++)
        {
            string tocheck=s.substr(i,sub.size());
            if(can(tocheck,sub,v))
                return true;
        }
        return false;
        
    }
};

