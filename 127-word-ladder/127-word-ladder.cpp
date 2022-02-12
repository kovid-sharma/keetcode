class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
        unordered_set<string>st;
        bool aagya=false;
        for(int i=0;i<n;i++)
        {
            st.insert(wordList[i]);
            if(wordList[i]==endWord)
                aagya=true;
        }
        if(!aagya)
            return 0;
        queue<string>level;
        level.push(beginWord);
        int ans=2;
        while(!level.empty())
        {   
           int ele=level.size();
            while(ele--)
            {
               string abhi=level.front();
                level.pop();
                for(int j=0;j<abhi.size();j++)
                {
                    string tmp=abhi;
                    for(char t='a';t<='z';t++)
                    {
                        tmp[j]=t;
                        if(tmp==abhi)
                            continue;
                        if(tmp==endWord)
                            return ans;
                        if(st.count(tmp))
                        {
                            level.push(tmp);
                            st.erase(tmp);
                        }
                    }
                }
            }
            ans++;
            
        }
        return 0;
    }
};