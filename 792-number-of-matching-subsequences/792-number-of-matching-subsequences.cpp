class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen=s.size();
        int tlen=t.size();
        if(slen==0) return true;
        if(slen>tlen) return false;
        int tptr=0;
        int sptr=0;
        for(;sptr<slen;sptr++)
        {
           if(tptr>=tlen)
               break;
            while(tptr<tlen and t[tptr]!=s[sptr])
                tptr++;
            tptr++;
        }
        if(sptr==slen and s[sptr-1]==t[tptr-1])
            return true;
        return false;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        int cnt=0;
        sort(words.begin(),words.end());
        for(int i=0;i<words.size();i++)
        {
           if(!isSubsequence(words[i],s))
           {
              while(i+1<words.size() and words[i]==words[i+1])
                  i++;
           }
            else
            {
               cnt++;
               while(i+1<words.size() and words[i]==words[i+1])
               {
                   cnt++;i++;
               } 
            }
               
        }
        return cnt;
        
    }
};