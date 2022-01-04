class Solution {
public:
    int bitwiseComplement(int n) {
        //classic question
        if(n==0)return 1;//basic edge case
        int ans=0;//final answer value
        int cur_dec_place=0;//current decimal place
        //The while loop below is for traversing the number n 
        while(n)
        {
            if((n&1)==0)//if the current bit in the cur_dec_place is 0
            {
                ans+=(1<<cur_dec_place);//add 2 power of that place in final answer
            }
            cur_dec_place++;//add place
            n>>=1;//traverse bit
        }
        return ans;
    }
};