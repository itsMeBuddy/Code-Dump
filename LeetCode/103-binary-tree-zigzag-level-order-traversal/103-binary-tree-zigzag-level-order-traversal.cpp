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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(root == NULL)
            return {};
        
        vector<vector<int>> ans;
        
        queue <TreeNode*> q;
        q.push(root);
        
        bool lr = true;
        
        while(!q.empty()){
            int size = q.size();
            vector<int> temp(size);
            for(int i=0;i<size;i++){
                TreeNode *node = q.front();
                q.pop();
                int ind = lr ? 0+i : (size-1-i);
                temp[ind] = node->val;
                if(node->left != NULL)
                    q.push(node->left);
                if(node->right != NULL)
                    q.push(node->right);
            }
            lr = !lr;
            ans.push_back(temp);
        }
        return ans;
    }
};