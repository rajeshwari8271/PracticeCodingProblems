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
bool PrintLevel(Node * root,int l)
{
    if (root==nullptr) return false;
    if(l==1)
    {
    cout<<root->data<<" ";
    return true;
    }
    bool left=PrintLevel(root->left,l-1);
    bool right=PrintLevel(root->right,l-1);
    return(left||right);

}
void printLevelOrder(Node *root)
{
    int level=1;
    while(PrintLevel(root,level))
    {
        level++;
    }

}
int main()
{
    Node * root=new Node(1);
    //root->left=new Node(2);
   // root->right=new Node(3);
    //root->left->left=new Node(4);
    //root->left->right=new Node(5);
   // root->right->left=new Node(6);
  //  root->right->right=new Node(7);
    printLevelOrder(root);

}
