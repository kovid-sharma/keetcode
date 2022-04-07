class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int ma=0;
        int n=commands.size();
        vector<bool>dir={true,false,false,false};//north,east,west,south
        int x=0;
        int y=0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<obstacles.size();i++)
            mp[{obstacles[i][0],obstacles[i][1]}]=1;

        for(int i=0;i<n;i++)
        {
            if(commands[i]==-1)
            {
                if(dir[0]) dir[0]=false,dir[1]=true;
                else if(dir[1]) dir[1]=false,dir[3]=true;
                else if(dir[2]) dir[2]=false,dir[0]=true;
                else dir[3]=false,dir[2]=true;
            }
            else if(commands[i]==-2)
            {
                if(dir[0]) dir[0]=false,dir[2]=true;
                else if(dir[1]) dir[1]=false,dir[0]=true;
                else if(dir[2]) dir[2]=false,dir[3]=true;
                else dir[3]=false,dir[1]=true;
            }
            else
            {   
                int move=commands[i];
               if(dir[0])
               {    
                   while(move--)
                       if(mp[{x,y+1}])
                           break;
                       else
                           y++;      
               }
                else if(dir[1]) 
                {
                    while(move--)
                       if(mp[{x+1,y}])
                           break;
                       else
                           x++;
                }
                else if(dir[2]) 
                {
                    while(move--)
                       if(mp[{x-1,y}])
                           break;
                       else
                           x--;
                }
                else 
                {
                    while(move--)
                       if(mp[{x,y-1}])
                           break;
                       else
                           y--;
                }
            }
            int sum= pow(x,2)+pow(y,2);
            ma=max(ma,sum);
        }
        return ma;
    }
};