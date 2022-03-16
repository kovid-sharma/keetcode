class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int idx=0;
        stack<int>now;
        for(int i=0;i<pushed.size();i++)
        {
            now.push(pushed[i]);
            while(!now.empty() and now.top()==popped[idx])
            {
                now.pop();
                idx++;
            }
        }
        return now.empty();
    }
};