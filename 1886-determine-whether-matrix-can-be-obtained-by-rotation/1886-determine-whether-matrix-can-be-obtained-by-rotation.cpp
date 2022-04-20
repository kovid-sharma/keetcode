class Solution {
public:
    vector<vector<int>> anti(vector<vector<int>>&m)
    {   
        for(int i=0;i<m.size();i++)
            for(int j=i+1;j<m[0].size();j++)
                swap(m[i][j],m[j][i]);
        reverse(m.begin(),m.end());
        return m;
    }
    vector<vector<int>> clck(vector<vector<int>>m)
    {   
        reverse(m.begin(),m.end());
        for(int i=0;i<m.size();i++)
            for(int j=i+1;j<m[0].size();j++)
                swap(m[i][j],m[j][i]);
        return m;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(anti(mat)==target)return true;
        if(anti(mat)==target)return true;
        if(anti(mat)==target)return true;
        if(anti(mat)==target)return true;
        return false;
        
    }
};