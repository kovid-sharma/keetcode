class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>pxor(n,0);
        pxor[0]=arr[0];
        for(int i=1;i<n;i++)
            pxor[i]=pxor[i-1] xor arr[i];
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {   
            if(queries[i][0]==0){
                ans.push_back(pxor[queries[i][1]]);continue;
            }
            int num= pxor[queries[i][1]] xor pxor[queries[i][0]-1];                            
            ans.push_back(num);
            
        }
        return ans;
    }
};