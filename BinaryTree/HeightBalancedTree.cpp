#include<iostream>
#include<algorithm>
using namespace std;
class Node
{
    public: int data;
            Node *left,*right;

            Node(int d)
            {
                data=d;
                left=right=NULL;
            }
};

int height(Node *node)
{
    if(node==NULL)return 0;
    return( 1 + max( height(node->left), height(node->right) ) );

}


bool ChkHeightBalanced(Node *node)
{
    if(node==NULL)
        return true;
    int lh,rh;

    lh=height(node->left);
    rh=height(node->right);

    if( (abs(lh-rh)<=1) && ChkHeightBalanced(node->left) && ChkHeightBalanced(node->right) )
        return true;
    else
    {
        return false;
    }
    

}

int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->left->left=new Node(3);
    root->right=new Node(5);
    root->right->right=new Node(6);
    root->right->right->right=new Node(9);
    if(ChkHeightBalanced(root))
        cout<<"The Tree is Balanced";
    else
     {
         cout<<"Tree is not balanced";
     }
     

}