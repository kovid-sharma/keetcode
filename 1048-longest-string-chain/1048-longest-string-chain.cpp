class Solution {
public:
    static bool comp(string s1,string s2)
    {
        return s1.size()<s2.size();//true means correct configuration
    }
    int longestStrChain(vector<string>& words) {
        //iterative dp is better
        unordered_map<string,int>preExist;
        for(auto it:words)
            preExist[it]=1;
        sort(words.begin(),words.end(),comp);
        // for(auto it:words)
        //     cout<<it<<endl;
        // return 0;
        
        int maxx=1;
        
        for(auto str:words)
        {
            int sz=str.size();
            
            
            /*predecessor of str can be made by deletions*/
            
            
            for(int tmp=0;tmp<str.size();tmp++)
            {   string now;
                for(int i=0;i<str.size();i++)
                {
                    if(i==tmp)
                        continue;
                    now.push_back(str[i]);
                    
                }
                
                if(preExist.find(now)!=preExist.end())
                {
                    preExist[str]=max(preExist[str],preExist[now]+1);
                    maxx=max(maxx,preExist[str]);
                   
                }
                 
            }
            
            
        }
        return maxx;
    }
};