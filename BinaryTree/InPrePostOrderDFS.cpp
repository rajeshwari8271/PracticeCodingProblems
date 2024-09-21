#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *left,*right;
    node(int d)
    {
        this->data=d;
        left=right=NULL;

    }
};

void PrintInOrder(struct node *Node)
{
    if(Node==NULL)return;
    PrintInOrder(Node->left);
    cout<<Node->data<<" ";
    PrintInOrder(Node->right);


}

void PrintPostOrder(struct node *Node)
{
    if(Node==NULL)return;
    PrintPostOrder(Node->left);
    PrintPostOrder(Node->right);
    cout<<Node->data<<" ";

}

void PrintPreOrder(struct node *Node)
{
    if(Node==NULL)return;
    cout<<Node->data<<" ";
    PrintPreOrder(Node->left);
    PrintPreOrder(Node->right);
}

int main()
{
    struct node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<"PreOrder List ";
    PrintPreOrder(root);
    cout<<"PostOrder List ";
    PrintPostOrder(root);
    cout<<"InOrder List ";
    PrintInOrder(root);


}