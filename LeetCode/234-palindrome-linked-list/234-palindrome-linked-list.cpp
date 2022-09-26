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
    ListNode* reverseLL(ListNode *head){
        ListNode *newHead = NULL;
        
        while(head != NULL){
            ListNode *nex = head->next;
            head->next = newHead;
            newHead = head;
            head = nex;
        }
        return newHead;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head->next==NULL){
            return true;
        }
        
        ListNode *slow = head, *fast = head;
        while(fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        slow->next = reverseLL(slow->next);
        slow = slow->next;
        
        while(slow!=NULL){
            if(head->val != slow->val)
                return false;
            head = head->next;
            slow = slow->next;
        }
        
        return true;
    }
};