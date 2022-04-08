class Solution {
public:
    int countVowelStrings(int n) {
        if(n==1)return 5;
        vector<int>ans={5,4,3,2,1};
        vector<int>cpy(5,0);
        int sum=accumulate(ans.begin(),ans.end(),0);
        if(n==2)return sum;
        for(int i=3;i<=n;i++)
        {   
            int prev=sum;
            cpy[0]=prev;
            for(int j=0;j<4;j++)
            {
                sum+=(prev-ans[j]);
                cpy[j+1]=(prev-ans[j]);
                prev-=ans[j];
                
                  
            }
            ans=cpy;
        }
        return sum;
    }
};