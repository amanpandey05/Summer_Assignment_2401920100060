class Solution {
public:
vector<int> next(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(nums.size());
    stack<int> st;
    st.push(-1);
    for(int i  = n-1; i>=0; i--){
        int curr = nums[i];
        while(st.top() != -1 && nums[st.top()] >= curr) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
vector<int> prev(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(nums.size());
    stack<int> st;
    st.push(-1);
    for(int i  = 0; i<n; i++){
        int curr = nums[i];
        while(st.top() != -1 && nums[st.top()] >= curr) {
            st.pop();
        }
        ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        vector<int> nxt = next(heights);
        vector<int> prv = prev(heights);
        for(int i= 0; i<n; i++) {
            int l = heights[i];
            if(nxt[i] == -1){    // next smaller elemnt me -1 ki jagah size store karana hai
                nxt[i] = n;
            }
            int b = nxt[i]-prv[i]-1;
            int area = l * b;
            maxi = max(area, maxi);
        }
        return maxi;
    }
};
