class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int st=m-1;
        int std=n-1;
        int k= m+n-1;
        while(st>=0 and std>=0){
            if(nums1[st]>nums2[std]){
                nums1[k]=nums1[st];
                st--;
                k--;
            }
            else{
                nums1[k]=nums2[std];
                std--;
                k--;
            }
        }
        while(std>=0){
            nums1[k]=nums2[std];
            std--;
            k--;
        }
    }
};