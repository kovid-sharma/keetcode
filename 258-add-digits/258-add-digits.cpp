class Solution {
public:
    int addDigits(int num) {
        if(num<10)return num;
        int t1=0;
        while(num)
        {
            t1+=num%10;
            num/=10;
        }
        if(t1<10)return t1;
        int t2=0;
        while(t1)
        {
            t2+=t1%10;
            t1/=10;
        }
        if(t2<10)return t2;
        t1=0;
        while(t2)
        {
            t1+=t2%10;
            t2/=10;
        }
        if(t1<10)return t1;
        return 1;
    }
};