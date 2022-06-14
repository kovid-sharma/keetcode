class Solution {
public:
    
    unordered_map<string,int>dp;
    int solve(int &s1,int &s2,int i,int j,string &str1,string &str2)
    {   
        
        if(i==s1 and j==s2)
            return 0;
        if(i==s1)
            return s2-j;
        if(j==s2)
            return s1-i;
        string str = to_string(i)+" "+to_string(j);
        if(dp.find(str)!=dp.end())
        {
            return dp[str];
        }
        
        
        //case 1
        
        if(str1[i]==str2[j])
            return dp[str]=solve(s1,s2,i+1,j+1,str1,str2);
        else
        {   
            //1 added has delete operation is done
            
            int delfrom1=1+solve(s1,s2,i+1,j,str1,str2);
            int delfrom2=1+solve(s1,s2,i,j+1,str1,str2);
            return dp[str]=min(delfrom1,delfrom2);
        }
    }
    
    
    int minDistance(string word1, string word2) {
        
        
        int s1=word1.size();
        int s2=word2.size();
        return solve(s1,s2,0,0,word1,word2);
        
        
        
        /*
        
        dp explaination
        
        
        
        let us traverse from start of both words
        
        
        
        Case 1- Both match -- good no deletion required and we want minimum hence we wont delete
        Case 2- Not match
            //delete from str1
            or 
            //delete from str2
            
            whichever way gives minimum answer we will return that
            
            
            if both strings end then it means both have been equaled
        
        */
    }
};