// In return you will get a vector of the datatype so described in lineNo. 5 (default = (int))


#include<bits/stdc++.h>
// #define int char
using namespace std;

void display(vector<int> &vec){
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

class Tree{
    public:
        int val;
        Tree *left;
        Tree *right;

        Tree(){
            val = -1;
            left = NULL;
            right = NULL;
        }

        Tree(int val){
            this->val = val;
            left = NULL;
            right = NULL;
        }
};

void preOrder(Tree *root, vector<int> &pre){
    if(root == NULL)
        return;
    pre.push_back(root->val);
    preOrder(root->left, pre);
    preOrder(root->right, pre);
}

void inOrder(Tree *root,  vector<int> &in){
    if(root == NULL)
        return;
    inOrder(root->left, in);
    in.push_back(root->val);
    inOrder(root->right, in);
}

void postOrder(Tree *root,  vector<int> &post){
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

    Tree *root = NULL;
    {
        root = new Tree(1);
        root->left =  new Tree(2);
        root->right =  new Tree(3);
        root->left->left =  new Tree(4);
        root->left->right =  new Tree(5);
        root->right->left =  new Tree(6);
        root->right->right =  new Tree(7);
    }

    // {
    //     root = new Tree('a');
    //     root->left =  new Tree('b');
    //     root->right =  new Tree('c');
    //     root->left->left =  new Tree('d');
    //     root->left->right =  new Tree('e');
    //     root->right->left =  new Tree('f');
    //     root->right->right =  new Tree('g');
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

