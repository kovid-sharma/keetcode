class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>milgyi(n,0);
        milgyi[0]=1;
        for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
     for(int i=0;i<n;i++)
        {
            if(milgyi[i]==1)
            {
                for(int j=0;j<rooms[i].size();j++)
                {
                    milgyi[rooms[i][j]]=1;
                }
            }
        }
         
        
        
        
        
         
         
        
        int sum= accumulate(milgyi.begin(),milgyi.end(),0);
        return sum==n;
    }
};