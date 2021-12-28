class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size())
            return findMedianSortedArrays(nums2,nums1);
        int n1=nums1.size();
        int n2=nums2.size();
        int low=0;int high=n1;
        while(low<=high)
        {
            int partnums1= (low+high)/2;
            int partnums2= (n1+n2+1)/2-partnums1;
            int prenums1=(partnums1==0)?INT_MIN:nums1[partnums1-1];
            int prenums2=(partnums2==0)?INT_MIN:nums2[partnums2-1];
            int postnums1=(partnums1==n1)?INT_MAX:nums1[partnums1];
            int postnums2=(partnums2==n2)?INT_MAX:nums2[partnums2];
            if(prenums1<=postnums2 and prenums2<=postnums1)
            {
                if((n1+n2)%2==1)
                    return max(prenums1,prenums2);
                else
                    return (max(prenums1,prenums2)+min(postnums1,postnums2))/2.0;
            }
            else if(prenums1>postnums2)
                high=partnums1-1;
            else 
                low=partnums1+1;
        }
        return 1.0;
        
    }
        
};