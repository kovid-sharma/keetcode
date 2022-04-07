class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(int i=0;i<stones.size();i++)
            pq.push(stones[i]);
        while(pq.size()>=2)
        {
            int n1=pq.top();
            pq.pop();
            int n2=pq.top();
            pq.pop();
            if(n1==n2)continue;
            pq.push(n1-n2);
        }
        if(pq.empty())return 0;
        return pq.top();
    }
};