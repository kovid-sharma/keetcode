// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void rec(vector<int>& nums,vector<int>&ret,int st,int hi){
        int mi=st+hi;
        if(st>hi)return;
        mi/=2;
        ret.push_back(nums[mi]);
        rec(nums,ret,st,mi-1);
        rec(nums,ret,mi+1,hi);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ret;
        rec(nums,ret,0,nums.size()-1);
        return ret;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends