class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         vector<vector<int>> ans(r, vector<int>(c));
         int n = mat.size();
         int m = mat[0].size();
         if(n*m != r*c) return mat;
         int cnt = 0;
     for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            ans[cnt/c][cnt%c] = mat[i][j];
            cnt++;
        }
     } 
     return ans;  
    }
};