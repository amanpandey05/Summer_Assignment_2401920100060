class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      int n = matrix.size();
      int m = matrix[0].size();
      int left = 0 , right = m-1;
      int top = 0 , bottom = n-1;
      int t = m*n; // total element
      int cnt = 0;
      vector<int> a;
      while(cnt < t){
        for( int i=left; i<=right && cnt<t; i++){
            a.push_back(matrix[top][i]);
            cnt++;
           } 
        top++;
        for(int i=top; i<=bottom && cnt<t; i++){
           
            a.push_back(matrix[i][right]);
            cnt++;
            
        } 
        right--;
        // if(top <= bottom){
        for(int i=right; i>=left && cnt<t; i--){
        
            a.push_back(matrix[bottom][i]);
            cnt++;
           }  
        bottom--;
        // }
        for(int i = bottom; i>=top && cnt<t; i--){
      
            a.push_back(matrix[i][left]);
            cnt++;
        } 
         left++;

      }  
      return a; 
        }
};
