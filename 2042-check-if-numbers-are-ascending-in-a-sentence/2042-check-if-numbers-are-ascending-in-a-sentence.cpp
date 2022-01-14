class Solution {
public:
    bool areNumbersAscending(string s) {
        int idx=0;
        int n=s.size();
        int prev=-1;
        while(idx<n)
        {   
            if(s[idx]>=48 and s[idx]<=57)
            {    
                int ans=0;
              while(s[idx]!=' ' and idx<n)
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