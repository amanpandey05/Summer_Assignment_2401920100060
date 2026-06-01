class Solution {
public:
    int minimumCost(vector<int>& cost) {
       int n = cost.size();
       int mini = INT_MAX;
       int sum = 0;
       int cnt = 0;
       sort(cost.begin(), cost.end());
        for(int i = n-1; i>=0; i--) {
            cnt++;
            if(cnt % 3 == 0) {
                continue;
            }
             sum += cost[i];
        }
        return sum;
    }
};