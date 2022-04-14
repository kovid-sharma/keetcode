class Solution {
public:
    bool halvesAreAlike(string s) {
        int now=0;
        for(int i=0;i<s.size()/2;i++)
        {
            s[i]=toupper(s[i]);
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
                now++;
        }
        for(int i=s.size()/2;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')
                now--;
        }return now==0;
    }
};