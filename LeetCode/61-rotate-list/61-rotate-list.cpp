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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
            return NULL;
        
        ListNode *x = head;
        int cnt = 1;
        while(x->next){
            x=x->next;
            cnt++;
        }
        
        x->next = head;
        
        int m = cnt - k%cnt;
        
        
        while(m--){
            x = x->next;
        }
        
        ListNode *res = x->next;
        x->next = NULL;
        
        return res;
    }
};