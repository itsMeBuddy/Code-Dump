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

//Space ->  O(1)        -> n for ans;
//Time  ->  O(n)

class Solution {
public:
    void display(vector<int> vec){
        for(int i = 0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    
    ListNode* mergeNodes(ListNode* head) {
        ListNode *h = head;
        ListNode *temp = head;
        vector<int> vec;
        int sum = 0;
        
        ListNode *store = new ListNode(0);
        ListNode *ans = store;
        
        while(temp != NULL){
            if(temp->val != 0){
                sum+=temp->val;
            }
            else if(temp != head){
                ListNode *temp = new ListNode(sum);
                store->next = temp;
                store = store->next;
                sum = 0;
            }
            temp = temp->next;
        }

        
        return ans->next;
    }
};