class Solution {
public:
    //understanding unon find operation
    vector<int>prnt;
    int find(int find_p)
    {
        if(prnt[find_p]==-1)return find_p;
        else
            return prnt[find_p]=find(prnt[find_p]);
    }
    void unionize()
    {
        
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        prnt.resize(n,-1);//initial value of parent of each index is -1
        for(int i=0;i<pairs.size();i++)
        {
            int findx= find(pairs[i][0]);
            int findy= find(pairs[i][1]);
            if(findx==findy)
            {
                
            }
            else
            {
                prnt[findy]=findx;
            }
        }
        //for(auto it:prnt)cout<<it<<" ";
        //return s;
        unordered_map<int,vector<int>>mp;//adjacency list
        for(int i=0;i<s.size();i++)
        {
            mp[find(i)].push_back(i);
        }
        //bas ab connect component ko fix karna
        
        for(auto it:mp)  //it represents 1 connected component
        {
            string now;
            for(int i=0;i<it.second.size();i++)
                now.push_back(s[it.second[i]]);
            sort(now.begin(),now.end());
            int idx=0;
            for(int i=0;i<it.second.size();i++)
            {
                s[it.second[i]]=now[idx];
                idx++;
            }
        }
        return s;
    }
};
