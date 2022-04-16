class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        int sz=hi-lo+1;
        while(sz>k)
        {
            if(abs(arr[lo]-x)>abs(arr[hi]-x))
                lo++;
            else
                hi--;
            sz=hi-lo+1;
        }
        vector<int>ans;
        for(int i=lo;i<=hi;i++)
        {
            ans.push_back(arr[i]);
        }return ans;
    }
};