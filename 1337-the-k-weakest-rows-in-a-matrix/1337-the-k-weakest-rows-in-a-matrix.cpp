class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>st;
        int rows=mat.size();
        int cols=mat[0].size();
        for(int i=0;i<rows;i++)
        {
            int lo=0;
            int hi=cols-1;
            while(lo<=hi)
            {
                int mid= lo+(hi-lo)/2;
                if(mat[i][mid]==0)
                    hi=mid-1;
                else
                    lo=mid+1;
            }
            st.insert({hi,i});
            
        }
        vector<int>ans;
        for(auto it:st)
        {
            ans.push_back(it.second);
            if(ans.size()==k)return ans;
        }
        return ans;
    }
};