class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int n=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(i+2<n and s[i+2]=='#')
            {
                i+=2;
                ans+= 'k' + (s[i-2]-'1')*10 + (s[i-1]-'1');
            }
            else
                ans+= 'a' + (s[i]-'1');
                
        }
        return ans;
    }
};