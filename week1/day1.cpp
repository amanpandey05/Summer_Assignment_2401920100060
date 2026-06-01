// Remove duplicates from sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n = nums.size();
      int j = 0;
      for(int i=0; i<n; i++){
        if(nums[j] != nums[i]){
             j++;
         nums[j] = nums[i];
           
        }
      }
      return j+1;  
    }
};

// Two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
           int num= nums[i];
            int more = target - num;
            if(mpp.find(more) != mpp.end()){
                return {mpp[more] , i};
            }
            mpp[num] = i;
        }
        return {-1 , -1};
    } 
};

// Best time to buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxprofit = 0;
        int n = prices.size();
        for(int i = 0; i < n; i++){
          

           maxprofit = max(maxprofit ,  prices[i] - mini);
            mini = min(mini , prices[i]);
        } 
        return maxprofit;
    }
};
