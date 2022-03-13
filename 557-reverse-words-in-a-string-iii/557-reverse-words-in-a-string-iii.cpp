class Solution {
public:
    string reverseWords(string s) {
       int len=s.size();
        string a,res;
        for(int i=0;i<len;i++)
        {
            if(s[i]==' ')
            {   
                reverse(a.begin(),a.end());
                res+=a;
                res+=' ';
                a.clear();
            }   
            else
                a+=s[i];
        }
        reverse(a.begin(),a.end());
        res+=a;
        return res;      
    }
};