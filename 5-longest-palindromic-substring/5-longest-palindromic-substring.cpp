class Solution {
public:
    int finSt=0;
    int finEn=0;
    int ans=1;
    //if they are not updated that means there are no substrings then the answer returned is the first character which is required
    vector<vector<int>>mp;
    int solve(int tmpSt,int tmpEn,string &s)
    {
        if(tmpSt>=tmpEn)
            return 10;
        
        if(mp[tmpSt][tmpEn]!=-1)
            return mp[tmpSt][tmpEn];
        if(s[tmpSt]==s[tmpEn] and solve(tmpSt+1,tmpEn-1,s)==10)
        {
            if(ans<tmpEn-tmpSt+1)
            {
                ans=tmpEn-tmpSt+1;
                finSt=tmpSt;
                finEn=tmpEn;
            }
            return mp[tmpSt][tmpEn]=10;
        }
        else
        {
            solve(tmpSt+1,tmpEn,s);
            solve(tmpSt,tmpEn-1,s);
            return mp[tmpSt][tmpEn]=12;
        }
    }
    string longestPalindrome(string s) {
        //clear
        //10 if pal and 12 if not
        int n=s.size();
        mp.resize(n,vector<int>(n,-1));
        solve(0,n-1,s);
        return s.substr(finSt,finEn-finSt+1);
    }
};