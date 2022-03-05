class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int leftmain=0;
        int rgtmain=s.size()-1;
        int ans=0;
        while(leftmain<rgtmain)
        {
            int newl=leftmain;
            int newr=rgtmain;
            while(s[newl]!=s[newr])
                newr--;
            if(newl==newr)
            {
                ans++;
                swap(s[newr],s[newr+1]);
                continue;
            }
            while(newr<rgtmain)
            {   
                swap(s[newr],s[newr+1]);
                newr++;
                ans++;
            }
            leftmain++;
            rgtmain--;
        }
        return ans;
    }
};