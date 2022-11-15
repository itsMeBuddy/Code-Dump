/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    // TC -> O(n2)
    // SC -> O(n2)
    // tc can be reduced further
    
    void inOrder2(TreeNode *node, int &sum, int &size){
        if(node == NULL)
            return;
        
        inOrder2(node->left, sum, size);
        
        sum += node->val;
        size++;
        
        inOrder2(node->right, sum, size);
   
    }
    
    void inOrder1(TreeNode *node, int &cnt){
        if(node == NULL)
            return;
        inOrder1(node->left, cnt);
        
        int sum = 0;
        int size = 0;
        inOrder2(node, sum, size);
        int avg = sum/size;
        if(avg == node->val){
            cnt++;
        }
        
        inOrder1(node->right, cnt);
    }
    
    int averageOfSubtree(TreeNode* root) {
        int cnt = 0;
        
        inOrder1(root, cnt);
        
        return cnt;
    }
};