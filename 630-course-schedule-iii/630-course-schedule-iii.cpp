class Solution {
public:
   static bool comp(vector<int>a,vector<int>b){
        return a[1]<b[1];
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),comp);
        // cout<<courses[0][1];
        // return 0;
        priority_queue<int>pq;
        int total=0;
        for(auto it:courses)
        {
            if(total+it[0]<=it[1])
            {
                total+=it[0];
                pq.push(it[0]);
            }
            else if(!pq.empty() and pq.top()>=it[0]){
                total-=pq.top();
                total+=it[0];
                pq.pop();
                pq.push(it[0]);
            }
        }
        return pq.size();
    }
};
