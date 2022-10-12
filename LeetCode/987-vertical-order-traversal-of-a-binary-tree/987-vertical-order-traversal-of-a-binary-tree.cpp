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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        if(root == NULL)
            return {{}};
        
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int,int>>> q;
        
        q.push({root,{0,0}});
        
        while(!q.empty()){
            TreeNode *temp = q.front().first;
            int x = q.front().second.first;
            int y = q.front().second.second;
            q.pop();
            nodes[x][y].insert(temp->val);
            if(temp->left != NULL)
                q.push({temp->left,{x-1,y+1}});
            if(temp->right != NULL)
                q.push({temp->right,{x+1,y+1}});
        }
        vector<vector<int>> verticalOrder;
        for(auto i: nodes){
            vector<int> temp;
            for(auto j: i.second){
                temp.insert(temp.end(), j.second.begin(), j.second.end());
            }
            verticalOrder.push_back(temp);
        }
        return verticalOrder;
    }
};