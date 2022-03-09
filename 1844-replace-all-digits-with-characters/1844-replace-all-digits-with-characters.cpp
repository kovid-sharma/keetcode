class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0;i<s.size();i++)
        {   
            if(i%2==1)
            s[i]= (s[i]-'0') + (s[i-1]);
        }
        return s;
    }
};