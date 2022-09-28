/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    
    void display(Node *ans){
        cout<<"[";
        while(ans){
            cout<<"[";
            cout<<ans->val<<",";
            if(ans->random == NULL){
                cout<<"null";
            }
            else{
                cout<<ans->random->val;
            }
            if(ans->next != NULL)
                cout<<","<<ans<<"],";
            else{
                cout<<","<<ans<<"]";
            }
            ans = ans->next;
        }
        cout<<"]";
        cout<<endl;
    }
    
    Node* copyRandomList(Node* head) {
        
        if(head == NULL)
            return head;

        display(head);

        Node *temp = head;
        while(temp != NULL){
            Node *n = new Node(temp->val);
            n->next = temp->next;
            temp->next = n;
            temp = temp->next->next;
        }
        
        temp = head;
        
        while(temp){
            if(temp->random == NULL)
                temp->next->random = NULL;
            else
                temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
        
        Node *res = head->next;
        Node *ans = res;
        
        Node *h = head;
        
        while(h!=NULL and res->next!=NULL){
            h->next = h->next->next;
            h = h->next;
            res->next = res->next->next;
            res = res->next;
        }
        
        h->next = NULL;  
        
        display(head);
        display(ans);
        
        
        return ans;
    }
};