class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>st;
        for(int i=0;i<mat.size();i++)
        {
            int cnt1=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    cnt1++;
            }
            st.insert({cnt1,i});
        }
        int i=0;
        vector<int>ans;
        for(auto it:st){
            if(i==k){
                break;
            }
            ans.push_back(it.second);
            i++;
        }
        return ans;
    }
};