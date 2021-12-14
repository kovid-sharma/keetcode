class Solution {
public:
    int arrayNesting(vector<int>& A) {
        long long res = 0, n = A.size();
        vector<bool> arr(n);
        for (int i=0;i<n;i++) {
            long long temp = 0;
            while (!arr[i]) {
                arr[i] = true;
                temp++;
                i = A[i];
            }
            res = max(res, temp);
        }
        return res;
    }
};