class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ar;
        int n=boxes.size();
        for(int i=0;i<n;i++)
            ar.push_back(boxes[i]-48);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i+1;j<n;j++)
            {
                if(ar[j]==1)
                {
                    sum+=j-i;
                }
            }
            for(int j=i-1;j>=0;j--)
            {
                if(ar[j]==1)
                {
                    sum-=j-i;
                }
            }
            ans.push_back(sum);
        }
        return ans;
        
        
    }
};