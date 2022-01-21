class Solution {
public:
    int getLucky(string s, int k) {
        int init=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' and s[i]<='i')
                init+=s[i]-'a'+1;
            else
            {
                int temp=s[i]-'a'+1;
                init+=temp%10;
                temp/=10;
                init+=temp;
            }
        }
        if(k==1)return init;
        int pro=0;
        k--;
        while(k--)
        {    pro=0;
            while(init)
            {
                pro+=init%10;
                init/=10;
            }
            init=pro;
           
        }
        return pro;
    }
};