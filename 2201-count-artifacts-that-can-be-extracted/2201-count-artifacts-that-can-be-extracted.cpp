class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& A, vector<vector<int>>& dig) {
        vector<vector<bool>> M(n, vector<bool>(n)); 
        for (auto &d : dig) M[d[0]][d[1]] = true;
        int ans = 0;
        for (auto &v : A) {
            bool good = true;
            for (int x = v[0]; x <= v[2] && good; ++x) {
                for (int y = v[1]; y <= v[3] && good; ++y) {
                    if (!M[x][y]) good = false;
                }
            }
            if (good) ++ans;
        }
        return ans;
    }
};