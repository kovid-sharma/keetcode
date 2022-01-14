class Solution {
public:
    bool areNumbersAscending(string s) {
        int idx=0;
        int prev=-1;
        while(idx<s.size())
        {   
            if(s[idx]>=48 and s[idx]<=57)
            {    
                int ans=0;
              while(s[idx]!=' ' and idx<s.size())
              {
                 ans=ans*10+s[idx]-'0';
                  idx++;
              }
                if(prev<ans)
                    prev=ans;
                else
                    return false;
            }
            idx++;
        }
        return true;
    }
};