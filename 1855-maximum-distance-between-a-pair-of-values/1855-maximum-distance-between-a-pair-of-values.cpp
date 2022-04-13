class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ma=INT_MIN;
        for(int i=0;i<nums1.size();i++)
        {
           int lo=i+1;
           int hi=nums2.size()-1;
            while(lo<=hi)
            {   
                int mid= lo+(hi-lo)/2;
                if(nums1[i]>nums2[mid])
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }
            }
            ma=max(ma,hi-i);
        }
        return ma;
    }
};