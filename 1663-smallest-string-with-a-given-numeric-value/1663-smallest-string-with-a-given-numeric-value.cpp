class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans;
        for(int i=0;i<n;i++)
            ans.push_back('a');
         k-=n;
        int i=n-1;
        int zs= k/25;
        int ne= k%25;
        while(zs--)
        {
            i--;
            ans[i+1]='z';
        }
        if(ne!=0)
        ans[i]='a'+ne;
        return ans;
        
    }
};