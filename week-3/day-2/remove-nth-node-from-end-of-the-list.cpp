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
int getlen(ListNode* head) {
    int len = 0;
    ListNode* temp = head;
    while(temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      int len = getlen(head);
      if(head == NULL) return NULL;
      if(n == len) {
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
      ListNode* temp = head;
        for(int i = 0; i<len-n-1; i++) {
            temp = temp->next;
        }
      
        ListNode* del = temp->next;
       
        temp->next = del->next;
         delete del;
        return head;
    }
};
