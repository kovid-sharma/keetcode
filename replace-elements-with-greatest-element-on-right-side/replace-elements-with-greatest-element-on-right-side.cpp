class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int sz=arr.size();
        if(sz==1){
            arr[0]=-1;
            return arr;
        }
        int m=arr[sz-1];
        arr[sz-1]=-1;
        int tm=arr[sz-2];
        arr[sz-2]=m;
        m=max(tm,m);
        for(int i=sz-3;i>=0;i--){
            tm=arr[i];
            arr[i]=m;
            m=max(m,tm);
        }
        return arr;
    }
};