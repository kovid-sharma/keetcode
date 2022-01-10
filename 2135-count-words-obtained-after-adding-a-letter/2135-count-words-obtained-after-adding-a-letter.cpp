class Solution {
public:
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        for(auto &i:startWords)
            sort(i.begin(),i.end());
        for(auto &q:targetWords)
            sort(q.begin(),q.end());
        sort(startWords.begin(),startWords.end());
        int cnt=0;
        for(auto&p:targetWords)
        {
            int t=p.size();
            for(int i=0;i<t;i++)
            {   
                string re="";
                for(int w=0;w<t;w++)
                {
                   if(p[w]!=p[i])  //this is for ek ek krke adding
                       re+=p[w];
                }
                if(binary_search(startWords.begin(),startWords.end(),re))
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};