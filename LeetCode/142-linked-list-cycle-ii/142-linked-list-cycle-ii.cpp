/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
            return NULL;
        
        if(head->next == head)
            return head;
        
        
        ListNode *headRef = head;
        ListNode *slow = head, *fast = head;
        do{
            if(fast==NULL or fast->next==NULL)
                return NULL;
            
            slow = slow->next;
            fast = fast->next->next;
            
        }while(slow != fast);
        
        slow = head;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
};