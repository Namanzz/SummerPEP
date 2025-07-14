#include<iostream>
#include<queue>
#include<vector>
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

int sumOfLevelK(TreeNode* root, int k){
    if(root==NULL) return -1;

    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    int sum=0;
    int level=1;

    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();

        if(temp!=NULL)
        {
            if(level==k){
                sum+=temp->data;
            }
            if(temp->left) q.push(temp->left);

            if(temp->right) q.push(temp->right);
        }
        else if(temp==NULL && !q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

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

void leftView(TreeNode* root){
    if(root==NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    cout<<"Left View: ";
    while(!q.empty()){
        int lvlSize=q.size();

        for(int i=0;i<lvlSize;i++){
            TreeNode* curr=q.front();
            q.pop();

            if(i==0)cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
    cout<<endl;
}

void rightView(TreeNode* root){
    if(root==NULL) return;

    queue<TreeNode*> q;
    q.push(root);

    cout<<"Right View: ";
    while(!q.empty()){
        int lvlSize=q.size();

        for(int i=0;i<lvlSize;i++){
            TreeNode* curr=q.front();
            q.pop();

            if(i==lvlSize-1)cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
    cout<<endl;
}

TreeNode* buildTreeLevelOrder(){
    int rootData;
    cout<<"Enter root value (-1 for NULL)"<<endl;
    cin>>rootData;

    if(rootData==-1) return NULL;

    TreeNode* root=new TreeNode(rootData);

    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* temp=q.front();
        q.pop();

        int leftData, rightData;
        cout<<"Enter left and right of "<<temp->data<<" (-1 for NULL)"<<endl;
        cin>>leftData>>rightData;

        if(leftData != -1){
            temp->left=new TreeNode(leftData);
            q.push(temp->left);
        }
        if(rightData != -1){
            temp->right=new TreeNode(rightData);
            q.push(temp->right);
        }
    }
    return root;
}

vector<int> ZigZag(TreeNode* root){
    vector<int> res;

    if (root == NULL) return res;

    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight=true;

    while(!q.empty()){
        int lvlSize=q.size();
        vector<int> level(lvlSize);

        for(int i=0;i<lvlSize;i++){
            TreeNode* node=q.front();
            q.pop();

            int index=(leftToRight)?i:(lvlSize-1-i);
            level[index]=node->data;

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        for(int i:level){
            res.push_back(i);
        }
        leftToRight=!leftToRight;
    }
    return res;
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

    int level=1;

    // cout<<"Sum of level "<<level<<": "<<sumOfLevelK(root,level)<<endl;

    // TreeNode* newRoot =  buildTreeLevelOrder();

    // cout<<"Inorder:"<<" ";
    // inorder(newRoot);
    // cout<<endl;
    // cout<<"Preorder:"<<" ";
    // preorder(newRoot);
    // cout<<endl;
    // cout<<"Postorder:"<<" ";
    // postorder(newRoot);
    // cout<<endl;
    // cout << "Level Order Traversal of the tree: ";
    // levelOrderTraversal(root);
    // cout << endl;

    leftView(root);
    rightView(root);

    cout<<"ZigZag traversal: ";
    vector<int> ans=ZigZag(root);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}