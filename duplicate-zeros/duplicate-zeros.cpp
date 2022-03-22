class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>n;
        for(int i=0;i<arr.size();i++)
        {
           if(arr[i]==0){
               n.push_back(0);
           }
            n.push_back(arr[i]);
        }
        for(int i=0;i<arr.size();i++)
            arr[i]=n[i];
    }
};