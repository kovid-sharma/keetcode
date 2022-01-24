class Solution {
public:
    bool detectCapitalUse(string word) {
        int n= word.size();
        if(word[n-1]>='A' and word[n-1]<='Z')
        {
            for(int i=0;i<n-1;i++)
            {
                if(word[i]<'A' or word[i]>'Z' )
                    return false;
            }
        }
        else
        {
            for(int i=1;i<n-1;i++)
            {
                if(word[i]<'a' or word[i]>'z')
                    return false;
            }
        }
        return true;
    }
};