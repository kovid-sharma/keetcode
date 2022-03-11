class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {   
            int curridx;
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j]){
                    curridx=j;
                    break;
                }
            }
            bool hit=true;
            for(int i=curridx+1;i<nums2.size();i++){
                
                if(nums2[i]>nums2[curridx]){
                    hit=false;
                    ans.push_back(nums2[i]);
                    break;
                }
            }
            if(hit)
                ans.push_back(-1);
        }
        return ans;
    }
};