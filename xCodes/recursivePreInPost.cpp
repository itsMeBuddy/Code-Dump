// In return you will get a vector of the datatype so described in lineNo. 5 (default = (int))


#include<bits/stdc++.h>
// #define int char
using namespace std;

void display(vector<int> &vec){
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

class TreeNode{
    public:
        int val;
        TreeNode *left;
        TreeNode *right;

        TreeNode(){
            val = -1;
            left = NULL;
            right = NULL;
        }

        TreeNode(int val){
            this->val = val;
            left = NULL;
            right = NULL;
        }
};

void preOrder(TreeNode *root, vector<int> &pre){
    if(root == NULL)
        return;
    pre.push_back(root->val);
    preOrder(root->left, pre);
    preOrder(root->right, pre);
}

void inOrder(TreeNode *root,  vector<int> &in){
    if(root == NULL)
        return;
    inOrder(root->left, in);
    in.push_back(root->val);
    inOrder(root->right, in);
}

void postOrder(TreeNode *root,  vector<int> &post){
    if(root == NULL)
        return;
    postOrder(root->left, post);
    postOrder(root->right, post);
    post.push_back(root->val);
}

signed main(void){

    /*
    Sample Tree
        1
      2   3
     4 5 6 7       
    */
    
    TreeNode *root = NULL;
    {
        root = new TreeNode(1);
        root->left =  new TreeNode(2);
        root->right =  new TreeNode(3);
        root->left->left =  new TreeNode(4);
        root->left->right =  new TreeNode(5);
        root->right->left =  new TreeNode(6);
        root->right->right =  new TreeNode(7);
    }

    // {
    //     root = new TreeNode('a');
    //     root->left =  new TreeNode('b');
    //     root->right =  new TreeNode('c');
    //     root->left->left =  new TreeNode('d');
    //     root->left->right =  new TreeNode('e');
    //     root->right->left =  new TreeNode('f');
    //     root->right->right =  new TreeNode('g');
    // }

    vector<int> pre, in, post;
    preOrder(root,pre);
    inOrder(root,in);
    postOrder(root,post);

    cout<<"pre->\t";
    display(pre);

    cout<<"in->\t";
    display(in);

    cout<<"post->\t";
    display(post);

    return 0;
}

