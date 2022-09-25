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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        {
            //Size
            
            ListNode *y1 = l1, *y2 = l2;
            int cnt1=0, cnt2=0;
            while(y1 and y2){
                cnt1++;
                cnt2++;
                y1 = y1->next;
                y2 = y2->next;
            }
            while(y1){
                cnt1++;
                y1 = y1->next;
            }
            while(y2){
                cnt2++;
                y2 = y2->next;
            }
            
            if(cnt2>cnt1){
                swap(l2,l1);
            }
            
        }
        
        int carryBit=0;
        
        ListNode *res1 = l1;
        ListNode *res2 = l2;
        
        ListNode *prev;
        
        while(l1 and l2){
            int temp = l1->val + l2->val + carryBit;
            l1->val = temp%10 ;
            carryBit = temp/10;
            prev = l1;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int temp = l1->val + carryBit;
            l1->val = temp%10 ;
            carryBit = temp/10;
            prev = l1;
            l1=l1->next;
        }
        if(carryBit!=0){
            ListNode *temp = new ListNode(carryBit);
            prev->next = temp;
            cout<<temp->val;
        }
        
        
        return res1;
    }
};