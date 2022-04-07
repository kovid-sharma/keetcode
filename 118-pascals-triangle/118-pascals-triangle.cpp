class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows==1)return ans;
        if(numRows==2){
            ans.push_back({1,1});return ans;
        }
        ans.push_back({1,1});
        for(int i=3;i<=numRows;i++)
        {
            vector<int>row;
            row.push_back(1);
            for(int j=1;j<=i-2;j++)
            {
                vector<int>lastrow=ans.back();
                int sum=lastrow[j]+lastrow[j-1];
                row.push_back(sum);
            }
            row.push_back(1);
            ans.push_back(row);
            row.clear();
        }
        return ans;
    }
};