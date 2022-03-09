class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int ans=0;
        vector<int>psum(arr.size());
        for(int i=0;i<arr.size();i++)
        {
            if(i==0)
                psum[i]=arr[i];
            else
                psum[i]=psum[i-1]+arr[i];
        }
        ans+=psum.back();
        int siz=3;
        while(siz<=arr.size())
        {
            for(int i=0;i<=psum.size()-siz;i++)
            {
                if(i==0)
                    ans+=psum[i+siz-1];
                else
                    ans+=(psum[i+siz-1]-psum[i-1]);
            }
            siz+=2;
        }
       return ans;
    }
};