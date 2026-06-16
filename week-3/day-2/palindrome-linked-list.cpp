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
    ListNode* mid(ListNode* head) {
        ListNode* s = head;
        ListNode* f = head -> next;
        while(f != NULL && f -> next != NULL) {
            f = f -> next -> next;
            s = s -> next;
        }
        return s;
    }
    ListNode* reverse(ListNode* head){
      ListNode* curr = head;
      ListNode* next = NULL;
      ListNode* prev = NULL;

      while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
      }  
      return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head ->next == NULL) return true;

        ListNode* middle = mid(head);
        ListNode* temp = middle -> next;

        middle -> next = reverse(temp);

        ListNode* h1 = head;
        ListNode* h2 = middle -> next;

        while(h2 != NULL) {
            if(h1 -> val != h2 -> val){
                return false;
            }
            h1 = h1 -> next;
            h2 = h2 -> next;
        }
          temp = middle -> next;

        middle -> next = reverse(temp);

        return true;

    }
};
