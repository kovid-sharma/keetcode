class Solution {
public:
    int myAtoi(string str) {
        if (str.size()==0) 
            return 0;
        int idx=0;
        int negpos=1;
        int n=str.size();
        while (idx<=n-2 and isspace(str[idx]))
            idx++;
        long long ans=0;
        if (str[idx]=='-' or str[idx]=='+') 
        {
           if(str[idx]=='-')
               negpos=-1;
            else negpos=1;
            idx++;
        }
        while (idx<n) 
        {
            if (str[idx]>=48 and str[idx]<=57)
            {
                ans=10*ans;
                ans+=(str[idx]-'0');
                idx++;
            }
            else  //digits over case
               return ans*negpos;
            if(ans>INT_MAX and negpos==1)
                return INT_MAX;
            if(ans>INT_MAX and negpos==-1)
                return INT_MIN;
                
        }
    return ans*negpos;
    }
};