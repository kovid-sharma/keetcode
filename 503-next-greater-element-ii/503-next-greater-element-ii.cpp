class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>arr(nums.size(),-1);
        stack<int>st;
        for(int i=0;i<2*nums.size();i++){
            while(!st.empty() and nums[st.top()]<nums[i%nums.size()]){
                arr[st.top()]=nums[i%nums.size()];
                st.pop();
            }
            st.push(i%nums.size());
        }
        return arr;
    }
};