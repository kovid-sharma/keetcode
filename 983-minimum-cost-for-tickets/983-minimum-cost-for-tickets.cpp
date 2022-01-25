class Solution {
public:
    
    vector<int>dp;
    int func(vector<int>days,vector<int>costs,int index)
    {   
        if(index>=days.size()) return 0;
        if(dp[index]) return dp[index];
        int day=costs[0] + func(days,costs,index+1);
        int i;
        for( i=index;i<days.size() and days[i]<days[index]+7;i++);
        int week= costs[1]+func(days,costs,i);
        for(i=index;i<days.size() and days[i]<days[index]+30;i++);
        int month=costs[2]+func(days,costs,i);
        return dp[index]= min(day,min(week,month));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        //recuersion
        
        dp.resize(367);
        return func(days,costs,0);
    }
};