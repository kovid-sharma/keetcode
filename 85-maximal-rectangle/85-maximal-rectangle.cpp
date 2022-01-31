class Solution {
public:
     int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        //brute
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int width=1;
            int left=i-1;
            int right=i+1;
            while(left>=0 and heights[left]>=heights[i])
            { width++;left--;}
            while(right<=n-1 and heights[right]>=heights[i])
            {width++;right++;}
            int tmp=heights[i];
            while(i<=n-1 and heights[i]==tmp)
                i++;
            i--;
            int tmp2= width*heights[i];
            m=max(m,tmp2);
        }
        return m;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int y=matrix.size();
        int x=matrix[0].size();
        int ma=0;
        vector<int>record(x,0);
        for(int i=0;i<y;i++)
        {   
            
            for(int j=0;j<x;j++)
            {
                if(matrix[i][j]=='1')
                    record[j]++;
                else
                    record[j]=0;
            }
            
            ma=max(ma,largestRectangleArea(record));
            
        }
        return ma;
    }
};