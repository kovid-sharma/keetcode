class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int>ans;
        int str=0;
        int enr=row-1;
        int stc=0;
        int enc=col-1;
        while(str<=enr and stc<=enc)
        {
            for(int i=stc;i<=enc;i++)
                 ans.push_back(matrix[str][i]);
            str++;
            if(str>enr)break;
            for(int i=str;i<=enr;i++)
                ans.push_back(matrix[i][enc]);
            enc--;
            if(enc<stc)break;
            for(int i=enc;i>=stc;i--)
                ans.push_back(matrix[enr][i]);
            enr--;
            if(enr<str)break;
            for(int i=enr;i>=str;i--)
                ans.push_back(matrix[i][stc]);
            stc++;
            if(stc>enc)
                break;
            
        }
        /*for(int i=1;i<row;i++)
            
        for(int i=col-2;i>=0;i--)
            ans.push_back(matrix[row-1][i]);
        for(int i=row-2;i>=1;i--)
            ans.push_back(matrix[i][0]);*/
        
        return ans;
    }
};