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
    
    // TC = O(n)
    // SC = stack space : O(n)
    
    void inOrder(TreeNode *node, int &sum){
        if(node == NULL)
            return;
        
        inOrder(node->left, sum);
        
        if(node->val % 2 == 0){
            if(node->left != NULL){
                if(node->left->left != NULL)
                    sum += node->left->left->val;
                if(node->left->right != NULL)
                    sum += node->left->right->val;
            }
            if(node->right != NULL){
                if(node->right->left != NULL)
                    sum += node->right->left->val;
                if(node->right->right != NULL)
                    sum += node->right->right->val;
            }
        }
        
        inOrder(node->right, sum);
        
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        inOrder(root, sum);
        return sum;
    }
};