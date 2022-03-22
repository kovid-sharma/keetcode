class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans;
        for(int i=0;i<n;i++)
            ans.push_back('a');
         k-=n;
        int i=n-1;
        while(true){
            if(k>=25){
                ans[i]='z';
                k-=25;
                i--;
            }
            if(k==0){
                break;
            }
            if(k<25){
                ans[i]='a'+k;
                k=0;
            }
            
            
        }
        return ans;
        
    }
};