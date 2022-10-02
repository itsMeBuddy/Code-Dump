// In return you will get a vector of the datatype so described in lineNo. 5 (default = (int))
TC = O(4N)
SC = O(3N);

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

    vector<int> pre, in, post;

    stack<pair<Tree*,int>> st;

    st.push(make_pair(root,1));

    while(!st.empty()){
        pair<Tree*, int> node = st.top();
        st.pop();
        if(node.second == 1){
            pre.push_back(node.first->val);
            node.second++;
            st.push(node);
            if(node.first->left != NULL)
                st.push(make_pair(node.first->left,1));
        }
        else if(node.second == 2){
            in.push_back(node.first->val);
            node.second++;
            st.push(node);
            if(node.first->right != NULL)
                st.push(make_pair(node.first->right,1));
        }
        else{
            post.push_back(node.first->val);
        }
    }

    cout<<"pre->\t";
    display(pre);

    cout<<"in->\t";
    display(in);

    cout<<"post->\t";
    display(post);

    return 0;
}

