class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=2)return false;
        int maix=0;int m_idx;
        for(int i=0;i<arr.size();i++)
        {
            maix=max(maix,arr[i]);
            if(maix==arr[i])
                m_idx=i;
        }
        if(m_idx==0 or m_idx==arr.size()-1)return false;
        for(int i=0;i<m_idx;i++){
            if(arr[i]>=arr[i+1])return false;
        }
        for(int i=arr.size()-1;i>m_idx;i--){
            if(arr[i]>=arr[i-1])return false;
        }
        return true;
        
    }
};