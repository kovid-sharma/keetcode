class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int st1=0;
        int st2=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(st1<nums1.size() and st2<nums2.size())
        {
            if(nums1[st1]>nums2[st2])
            {
                st2++;
            }
            else if(nums2[st2]>nums1[st1])
            {
                st1++;
            }
            else
            {
                ans.push_back(nums1[st1]);
                st1++;
                st2++;
            }
        }
        return ans;
    }
};