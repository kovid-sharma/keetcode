class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int difcnt=0;
        int idx1dif=-1;int idx2dif=-1;
        if(s1.size()!=s2.size())return false;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                difcnt++;
                if(difcnt>2)
                    return false;
                if(idx1dif==-1)
                    idx1dif=i;
                else
                    idx2dif=i;
            }
        }
        if(difcnt==0)return true;
        if(difcnt==1)return false;
        if(s1[idx1dif]==s2[idx2dif] and s1[idx2dif]==s2[idx1dif])
            return true;
        
        return false;
    }
};