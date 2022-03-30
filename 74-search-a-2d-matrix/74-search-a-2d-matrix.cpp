class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        if(!n)return false;
        int m= matrix[0].size();
        if(!m)return false;
        int l=0;
        int r= m*n;
        r--;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(matrix[mid/m][mid%m]==target)return true;
            else if(matrix[mid/m][mid%m]<target)
                l=mid+1;
            else
                r=mid-1;
        }
        return false;
    }
};