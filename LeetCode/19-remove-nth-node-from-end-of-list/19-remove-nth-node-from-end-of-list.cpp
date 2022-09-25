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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *dummy = new ListNode(-1);
        
        dummy->next = head;
        
        ListNode *lead = dummy;
        // n++;
        
        while(n--){
            lead=lead->next;
        }
        
        ListNode *slow = dummy;
        ListNode *prev = dummy;
        
        while(lead){
            lead = lead->next;
            prev=slow;
            slow = slow->next;
        }
        
        prev->next = slow->next;
        
        return dummy->next;

    }
};