class Solution {
public:
    static bool comp(vector<int>a,vector<int>b)
    {
        if(a[0]==b[0])
            return a[1]<b[1];
        return a[0]>b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();
        vector<vector<int>>ans;
        sort(people.begin(),people.end(),comp);
        for(int i=0;i<n;i++){
            // cout<<people[i][0]<<' '<<people[i][1]<<'}';
            ans.insert(ans.begin()+people[i][1],people[i]);
            
        }
        return ans;
    }
};