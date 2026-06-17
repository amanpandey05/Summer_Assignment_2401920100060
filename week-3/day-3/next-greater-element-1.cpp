class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
         int n = nums1.size();
         int m = nums2.size();
         for(int i = 0; i<n; i++){
            int el = nums1[i];
            int gr_el = -1;
            for(int j = 0; j<m; j++){
                if(nums2[j] == el){
                  for(int k = j+1; k<m; k++){
                    if(nums2[k] > el){
                         gr_el = nums2[k];
                        break;
                    }
                  }
                  break;
                }
              
                }
                ans.push_back(gr_el);
               
            }
        return ans;
    }
};
