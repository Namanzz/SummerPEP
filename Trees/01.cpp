#include<iostream>
using namespace std;

class TreeNode{
    public:
        int data;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int val){
            data=val;
            left = right = NULL;
        }

};

void inorder(TreeNode* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(TreeNode* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(TreeNode* root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    TreeNode* root=new TreeNode(1); //Root Node

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout<<"Inorder:"<<" ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder:"<<" ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder:"<<" ";
    postorder(root);
}



// 2^(l-1) formula for calculating maximum nodes
// Total number of nodes(Perfect Tree): n=2^(h)-1