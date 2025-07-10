#include <iostream>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int heightOfTree(TreeNode *root)
{
    if (root == NULL)
        return 0;
    else
    {
        // int left=heightOfTree(root->left)+1;
        // int right=heightOfTree(root->right)+1;
        // return max(left,right);
        return max(heightOfTree(root->left), heightOfTree(root->right)) + 1;
    }
}

int numberOfNodes(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + numberOfNodes(root->left) + numberOfNodes(root->right);
}

int countLeafNodes(TreeNode *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return countLeafNodes(root->left) + countLeafNodes(root->right);
}

int sumOfTree(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    // int left=sumOfTree(root->left)+root->data;
    // int right=sumOfTree(root->right);
    // return left+right;
    return sumOfTree(root->left) + sumOfTree(root->right) + root->data;
}

void levelOrderTraversal(TreeNode *root)
{
    if (root == NULL)
        return;
    queue<TreeNode *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        TreeNode *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
        
    }
}

int main()
{
    TreeNode *root = new TreeNode(1); // Root Node

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    // root->right->right->left = new TreeNode(8);
    // root->right->right->right = new TreeNode(9);

    cout << "Height of the tree: " << heightOfTree(root) << endl;
    cout << "Total number of nodes in the tree: " << numberOfNodes(root) << endl;
    cout << "Total number of leaf nodes: " << countLeafNodes(root) << endl;
    cout << "Sum of the nodes of the tree: " << sumOfTree(root) << endl;
    cout << "Level Order Traversal of the tree: ";
    levelOrderTraversal(root);
    cout << endl;
}