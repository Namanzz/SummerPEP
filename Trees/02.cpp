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

int heightOfTree(TreeNode* root){
    if(root==NULL) return 0;
    else{
        int left=heightOfTree(root->left)+1;
        int right=heightOfTree(root->right)+1;
        return max(left,right);
    }
}

int numberOfNodes(TreeNode* root){
    if(root==NULL) return 0;
    return 1+numberOfNodes(root->left)+numberOfNodes(root->right);
}

int countLeafNodes(TreeNode* root){
    if(root==NULL) return 0;
    if (root->left==NULL && root->right==NULL) return 1;
    return countLeafNodes(root->left)+countLeafNodes(root->right);
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
    root->right->right->left = new TreeNode(8);
    root->right->right->right = new TreeNode(9);

    cout<<heightOfTree(root)<<endl;
    cout<<numberOfNodes(root)<<endl;
    cout<<countLeafNodes(root)<<endl;
}
