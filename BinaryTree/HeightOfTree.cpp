#include<iostream>
#include<algorithm>
using namespace std;
class Node
{
  public:  int data;
    Node *left,*right;
    Node(int d)
    {
        data=d;
        left=right=nullptr;
    }
};

int height(Node *node)
{
    if(node==nullptr)return 0;
    return(1+max(height(node->left),height(node->right)));
}

int main()
{
    Node *root=new Node(1);
  // Node *root;
    /* root->left=new Node(2);
    root->right=new Node(2);
   root->left->left=new Node(3);
   root->left->left->left=new Node(3); */
    cout<<"height of tree is "<<height(root);

}