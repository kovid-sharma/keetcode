class Solution {
public:
    bool isPal(string tmp)
    {
        int st=0;
        int la=tmp.size()-1;
        while(st<=la and tmp[st]==tmp[la])
        {
            la--;
            st++;
        }
        if(st>=la)
            return true;
        return false;
    }
    string longestPalindrome(string s) {
        int len=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int left=i;
            int right=i;
            while(left>=0 and right<n and s[left]==s[right])
            {
                len=max(right-left+1,len);
                left--;
                right++;
            }
            left=i;
            right=i+1;
            while(left>=0 and right<n and s[left]==s[right])
            {
                len=max(right-left+1,len);
                left--;
                right++;
            }
        }
        for(int i=0;i<n;i++)
        {
            string tmp=s.substr(i,len);
            if(isPal(tmp))
                return tmp;
        }
        return s;
    }
};