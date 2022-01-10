class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9)
        {
            digits[n-1]++;
            return digits;
        }
        //last element is 9;
        bool inc=true;
        for(int i=0;i<n;i++)
        {
            if(digits[i]!=9)
            {
                //no increase in size
                inc= false;
                break;
            }
        }
        if(inc==false)
        {
            for(int i=n-2;i>=0;i--)
            {   
                digits[i+1]=0;
                if(digits[i]!=9)
                {
                    digits[i]++;
                    return digits;
                }
            }
        }
        digits.push_back(0);
        digits[0]=1;
        for(int i=1;i<n;i++)
            digits[i]=0;
        return digits;
    }
};
