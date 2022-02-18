class Solution {
public:
    double trimMean(vector<int>& arr) {
        int num= arr.size()/20;
        sort(arr.begin(),arr.end());
        double sum= accumulate(arr.begin()+num,arr.end()-num,0);
        return sum/(arr.size()-2*num);
    }
};