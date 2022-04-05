class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int h=height.size()-1;
        int ma=INT_MIN;
        while(l<=h)
        {
            int now=(h-l)*(min(height[h],height[l]));
            ma=max(ma,now);
            if(height[h]<height[l])
                h--;
            else
                l++;
        }
        return ma;
    }
};