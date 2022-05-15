class Solution {
public:
    int largestVariance(string s) {
        string sc=s;
        reverse(s.begin(),s.end());
        int res=0;
        for(char ch1='a'; ch1<='z';ch1++)
        {
            for(char ch2='a';ch2<='z';ch2++)
            {
                if(ch1==ch2)continue;
                int on=0,tw=0;
                for(auto ch:s)
                {
                    if(ch1==ch)on++;
                    if(ch2==ch)tw++;
                    if(tw>on)
                    {
                        tw=0;on=0;
                    }
                    else if(tw>0)
                    {
                        res=max(res,on-tw);
                    }
                }
            }
        }
        for(char ch1='a'; ch1<='z';ch1++)
        {
            for(char ch2='a';ch2<='z';ch2++)
            {
                if(ch1==ch2)continue;
                int on=0,tw=0;
                for(auto ch:sc)
                {
                    if(ch1==ch)on++;
                    if(ch2==ch)tw++;
                    if(tw>on)
                    {
                        tw=0;on=0;
                    }
                    else if(tw>0)
                    {
                        res=max(res,on-tw);
                    }
                }
            }
        }
        return res;
    }
};