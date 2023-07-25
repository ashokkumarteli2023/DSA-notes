// https://www.youtube.com/watch?v=_jKa4gycZTw&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=91

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(Node *root)
{
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    // cout<<"Let's learn about Tree\n";
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    //preorder traversal
    preorder(root);

    //inorder
    //postorder
    return 0;
}