class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
       vector<int>pot;
        for(auto it:matrix)
            pot.push_back(*min_element(it.begin(),it.end()));
        vector<int>potmax;
        for(int j=0;j<matrix[0].size();j++)
        {   
            int temp=0;
            for(int i=0;i<matrix.size();i++)
            {
                temp=max(temp,matrix[i][j]);
            }
            potmax.push_back(temp);
        }
        unordered_map<int,int>mp;
        for(auto it:pot)
            mp[it]++;
        for(auto it:potmax)
            mp[it]++;
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second==2)
                ans.push_back(it.first);
        }
        return ans;
    }
};