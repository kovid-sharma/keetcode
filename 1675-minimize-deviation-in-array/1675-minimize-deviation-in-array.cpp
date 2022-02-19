class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mi=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==1)
                nums[i]*=2;
            mi=min(mi,nums[i]);
        }
        
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
            pq.push(nums[i]);
        int diff=INT_MAX;
        while(pq.top()%2==0)
        {
            int tmp=pq.top();
            pq.pop();
            pq.push(tmp/2);
            
            diff=min(diff,tmp-mi);
            mi=min(mi,tmp/2);
        }
        return min(diff,pq.top()-mi);
    }
};