class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        /*The question can actually be thought as minimum subarray of length n-k;*/
        int len= cardPoints.size()-k;
        vector<int>psum;
        psum.push_back(cardPoints[0]);
        for(int i=1;i<cardPoints.size();i++)
        {
            psum.push_back(psum.back()+cardPoints[i]);
        }
        if(len==0)
            return psum.back();
        int mi=INT_MAX;
        for(int i=0;i+len<=cardPoints.size();i++)
        {   
            // if(i==0)
            // cout<<psum[i+len-1]<<" ";
            // else
            // cout<<psum[i+len-1]-psum[i-1]<<" ";
            if(i)
            mi=min(mi,psum[i+len-1]-psum[i-1]);
            else
            mi=min(mi,psum[i+len-1]);
        }
        return psum.back()-mi;
    }
};