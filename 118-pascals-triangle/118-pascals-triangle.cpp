class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows==1)return ans;
        ans.push_back({1,1});
        for(int i=3;i<=numRows;i++)
        {
            vector<int>tmp;
            tmp.push_back(1);
            for(int j=0;j<i-2;j++)
            {
                vector<int>now=ans.back();
                int add= now[j]+now[j+1];
                tmp.push_back(add);
            }
            tmp.push_back(1);  
            ans.push_back(tmp);
        }
        return ans;
    }
};