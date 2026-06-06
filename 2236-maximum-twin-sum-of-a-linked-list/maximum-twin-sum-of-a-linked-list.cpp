/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
    ListNode* temp = head;
    vector<int> nums;
    while(temp != 0) {
     nums.push_back(temp->val);
     temp = temp->next;
    }
    int n = nums.size();
    int i = 0;
    int j = n-1;
    int maxi = 0;
    while(i<j) {
    int sum = 0;
    sum += nums[i]+nums[j];
    maxi = max(maxi, sum);
    i++;
    j--;
    }
    return maxi;
    }
};