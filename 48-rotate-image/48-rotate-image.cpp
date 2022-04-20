class Solution {
public:
    void anti(vector<vector<int>>& matrix){
         for(int i=0;i<matrix.size();i++)
            for(int j=i+1;j<matrix[0].size();j++)
                swap(matrix[i][j],matrix[j][i]);
        reverse(matrix.begin(),matrix.end());
    }
    void rotate(vector<vector<int>>& matrix) {
        anti(matrix);
        anti(matrix);
        anti(matrix);
       
    }
};