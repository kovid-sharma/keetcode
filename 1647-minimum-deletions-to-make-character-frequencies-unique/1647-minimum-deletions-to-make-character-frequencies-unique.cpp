class Solution {
public:
    int minDeletions(string s) {
        vector<int>fr(26,0);
        for(auto ch:s)
            fr[ch-'a']++;
        sort(fr.begin(),fr.end());
        int ans=0;
        for(int i=25;i>=1;i--)
        {
            if(fr[i-1]==0)
                break;
            if(fr[i-1]>=fr[i])
            {
                int now= fr[i-1];
                fr[i-1]=max(0,fr[i]-1);
                ans+= now-fr[i-1];
            }
        }
        return ans;
    }
};