class Solution {
public:
    static bool mycomp(int a,int b){
        return a>b;
    }
    bool isMonotonic(vector<int>& nums) {
        return is_sorted(nums.begin(),nums.end()) or is_sorted(nums.begin(),nums.end(),mycomp);
    }
};