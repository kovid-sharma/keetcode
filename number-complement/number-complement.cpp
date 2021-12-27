class Solution {
public:
    int findComplement(int num) {
        int ans=0;int place=0;
        while(num)
        {
            if(num&1)
            {
                
            }
            else
            {
              ans+=pow(2,place);  
            }
            place++;
            num>>=1;
        }
        return ans;
    }
};