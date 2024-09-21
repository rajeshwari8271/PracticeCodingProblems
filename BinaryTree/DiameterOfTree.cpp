//Diameter is the number of nodes in longest path between two leaves of tree

#include<iostream>
#include<algorithm>
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

int height(Node *root)
{
    if(root==NULL)return 0;
    return(max(height(root->left),height(root->right))+1);
}

int DiameterOfTree(Node *node)
{
    if(node==NULL)return 0;
    int lheight=height(node->left);
    int Rheight=height(node->right);
    int ldiameter=DiameterOfTree(node->left);
    int Rdiameter=DiameterOfTree(node->right);
    return(max(lheight+Rheight+1,max(ldiameter,Rdiameter)));
}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);
    root->right->left->right=new Node(8);

    cout<<"Diameter of tree is "<<DiameterOfTree(root);


}