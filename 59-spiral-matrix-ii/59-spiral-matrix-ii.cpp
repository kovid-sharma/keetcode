class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n));
        int ans=1;
        int cycle=0,index=0;//cycle starts from 0 after one cycle it becomes1
        while(ans<=n*n)
        {   
            index=cycle;
            while(index<n-cycle)
            {
                arr[cycle][index]=ans;
                index++;
                ans++;
            }
            index=cycle+1;
            while(index<n-cycle)
            {
                arr[index][n-cycle-1]=ans;
                ans++;
                index++;
            }
            index=n-cycle-2;
            while(index>=cycle)
            {
                arr[n-cycle-1][index]=ans;
                ans++;
                index--;
            }
            index=n-cycle-2;
            while(index>cycle)
            {
                arr[index][cycle]=ans;
                ans++;
                index--;
            }
            cycle++; 
        }
        return arr;
    }
};