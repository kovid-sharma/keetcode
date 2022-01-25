class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<=2)return false;
        bool inc=true;
        int ma=-1;int indx=0;
        if(arr[0]>=arr[1])return false;
        for(int i=0;i<arr.size()-1;i++)
        {
           if(arr[i]==arr[i+1])
               return false;
            if(ma<arr[i])
            {
                indx=i;
                ma=arr[i];
            }
        }
        if(ma==arr[arr.size()-1])return false;
        for(int i=0;i<indx;i++)
        {
            if(arr[i]>=arr[i+1])
                return false;
        }
        for(int i=indx;i<arr.size()-1;i++)
        {
            if(arr[i+1]>=arr[i])
                return false;
        }
        return true;
    }
};