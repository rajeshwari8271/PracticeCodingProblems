/*A complete binary tree is a binary tree in which all the levels
 are completely filled except possibly the lowest one, which is filled from the left.

A complete binary tree is just like a full binary tree, but with two major differences

All the leaf elements must lean towards the left.
The last leaf element might not have a right sibling i.e. a complete binary tree
 doesn't have to be a full binary tree. */


#include<iostream>
using namespace std;
class Node
{
    public: int data;
    Node * left,*right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }

};

int NumberOfNodes(Node * node)
{
    if(node == NULL)return 0;
    return(1+NumberOfNodes(node->left)+NumberOfNodes(node->right));
}

bool isComplete(Node *node,int i,int n)
{
    if(node==NULL)return true;
    if(i>=n)return false;
    return( isComplete(node->left, 2*i+1, n) && isComplete(node->right, 2*i+2, n));
         
         

}

int main()
{
    Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
  // root->right->left=new Node(6);
   root->right->right=new Node(7);
    int TotalNodes=NumberOfNodes(root);
     if(isComplete(root,0,TotalNodes))
        cout<<"BINARY TREE IS COMPLETE";
    else
    {
        cout<<"BINARY TREE IS NOT COMPLETE";
    } 
    cout<<"\nTotal Nodes "<<TotalNodes;
    
}