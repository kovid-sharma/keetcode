class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int left=i;
            int right=i;
            while(left>=0 and right<n and s[left]==s[right])
            {
                cnt++;
                left--;
                right++;
            }
            int lef=i;
            int rig=i+1;
            while(lef>=0 and rig<n and s[lef]==s[rig])
            {
                cnt++;
                lef--;
                rig++;
            }
        }
        return cnt;
    }
};