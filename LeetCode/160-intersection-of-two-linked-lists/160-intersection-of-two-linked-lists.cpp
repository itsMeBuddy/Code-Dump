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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;
        int cntA=0;
        int cntB=0;
        while(a and b){
            cntA++;
            cntB++;
            a = a->next;
            b = b->next;
        }
        while(a){
            a = a->next;
            cntA++;
        }
        while(b){
            b = b->next;
            cntB++;
        }
        
        if(cntA>cntB){
            swap(headA,headB);
        }
        int diff = abs(cntB-cntA);
        while(diff--){
            headB=headB->next;
        }
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};