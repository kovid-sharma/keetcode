class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st_idx=0;
        int en_idx=numbers.size()-1;
        while(st_idx<en_idx)
        {
            int sum= numbers[st_idx]+numbers[en_idx];
            if(sum>target)
                en_idx--;
            else if(sum<target)
                st_idx++;
            else
                return {st_idx+1,en_idx+1};
        }
        return {};
    }
};