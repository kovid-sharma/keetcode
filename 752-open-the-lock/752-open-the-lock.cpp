class Solution {
public:
    vector<string> turner(int idx,string tmp)
    {
        vector<string> res(2, tmp);
	    res[0][idx] = '0' + (res[0][idx] - '0' + 1) % 10;    
	    res[1][idx] = '0' + (res[1][idx] - '0' - 1 + 10) % 10;   
	     return res;
    }
    int openLock(vector<string>& deadends, string target) {
        queue<string>bfs;
        string init="0000";
        bfs.push(init);
        unordered_set<string>visited;
        for(auto s:deadends){
            visited.insert(s);
            if(s==init)return -1;
        }
        visited.insert(init);
        if(target==init)return 0;
        int ans=0;
        while(!bfs.empty())
        {
            int n=bfs.size();
            ans++;
            for(int i=0;i<n;i++)
            {
                string tmp= bfs.front();
                bfs.pop();
                for(int j=0;j<4;j++)
                {
                    for(auto str: turner(j,tmp))
                    {
                        if(visited.find(str)==visited.end())
                        {
                            if(target==str)return ans;
                            else{
                                bfs.push(str);
                                visited.insert(str);
                            }
                        }
                    }
                }
                
            }
        }
        return -1;
    }
};