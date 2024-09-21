#include<iostream>
using namespace std;
class Node
{
 public:   int data;
    Node *left,*right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

void deleteTree(Node * &root)//*& IS IMPORTANT ELSE NODE WILL NOT BE DELETED
{
    if(root==nullptr)return;
    deleteTree(root->left);
    deleteTree(root->right);
    cout<<"Deleteing node "<<root->data<<endl;
    delete root;
    root=nullptr;//

}

int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    deleteTree(root);
    if(root==nullptr)
        cout<<"Tree is successfully deleted";
    else
    {
        cout<<"Tree is not deleted "<<root;
    }
     

}
