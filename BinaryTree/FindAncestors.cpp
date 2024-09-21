#include<iostream>
using namespace std;
class Node
{
 public:   int data;
    Node *left,*right;
    Node(int d)
    {
        data=d;
        left=right=nullptr;
    }

};
bool FindAncestors(Node *root,int key)
{
    if(root==NULL)return false;
    if(root->data==key)
        return true;
    if(FindAncestors(root->left,key)||FindAncestors(root->right,key))
    {
        cout<<root->data<<" ";
        return true;
    }
    return false;

}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->right=new Node(23);
    int key=23;

    if(FindAncestors(root,key))
    cout<<"true";
    else
    {
        cout<<"False";
    }
    
    
}