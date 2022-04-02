class Solution {
public:
    long long numberOfWays(string s) {
        int a_of_1=0;
        int a_of_0=0;
        for(auto ch:s)
        {
            if(ch=='1')
                a_of_1++;
            else
                a_of_0++;
        }
        
        int n_of_1=0;
        int n_of_0=0;
        long long ans=0;
        for(auto ch:s)
        {
            if(ch=='1')
            {
                ans+=(a_of_0)*(n_of_0);
                n_of_1++;
                a_of_1--;
            }
            else
            {
                ans+=(a_of_1)*(n_of_1);
                n_of_0++;
                a_of_0--;
            }
        }
        return ans;
        
    }
};