class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr1=m-1;
        int ptr2=n-1;
        int last= m+n-1;
        
        while(ptr1>=0 and ptr2>=0)
        {
           if(nums1[ptr1]<nums2[ptr2])
           {
               nums1[last]=nums2[ptr2];
               ptr2--;
               last--;
           }
            else{
                nums1[last]=nums1[ptr1];
                ptr1--;
                last--;
            }
        }
        
        while(ptr2>=0){
            nums1[last]=nums2[ptr2];
            ptr2--;
            last--;
        }
    }
};