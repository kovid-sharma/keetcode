int toc;
class Solution {
public:
    
    static bool mycomp(int a,int b)
    {
        if(abs(a-toc)==abs(b-toc))
            return a<b;
        return abs(a-toc)<abs(b-toc);
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        toc=x;
        sort(arr.begin(),arr.end(),mycomp);
        vector<int>ans;
        int i=0;
        while(k--){
            ans.push_back(arr[i]);
            i++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};