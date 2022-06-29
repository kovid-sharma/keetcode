class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0])
        {
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        /*This is still brute force*/
        /*The logic is simple if any cell is empty then it means there is a greater height number           incoming at that position*/
        int n=people.size();
        sort(people.begin(),people.end(),comp);
        vector<vector<int>>ans(n);
        // cout<<people[0][0];
        // for(auto it:people)
        //     cout<<it[0]<<" "<<it[1];
        for(int i=0;i<people.size();i++)
        {
            int toChk=people[i][1];
            int curr=0;
            for(int j=0;j<people.size();j++)
            {   
                if(curr==toChk and ans[j].size()==0)
                {   
                    ans[j]=people[i];
                    break;
                }
                if(ans[j].size()==0)
                {
                    curr++;
                }
                
            }
        }
        return ans;
    }
};