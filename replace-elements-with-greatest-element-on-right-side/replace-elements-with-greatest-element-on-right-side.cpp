class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=arr.size()-2;i>=0;i--)
            arr[i]=max(arr[i],arr[i+1]);
        for(int i=0;i<arr.size()-1;i++)
            arr[i]=arr[i+1];
        arr[arr.size()-1]=-1;
        return arr;
    }
};