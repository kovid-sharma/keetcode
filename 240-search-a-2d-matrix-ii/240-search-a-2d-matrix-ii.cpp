class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row= matrix.size();
        if(!row)return false;
        int col=matrix[0].size();
        int rptr=0;
        int cptr=col-1;
        while(rptr<row and cptr>-1)
        {
            if(matrix[rptr][cptr]==target)
                return true;
            if(matrix[rptr][cptr]>target)
                cptr--;
            else
                rptr++;
        }
        return false;
    }
};