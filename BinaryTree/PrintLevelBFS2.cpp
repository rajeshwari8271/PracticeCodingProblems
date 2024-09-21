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
void PrintPreOrder(Node *node)
{
    if(node==NULL)return;
    cout<<node->data<<" ";
    PrintPreOrder(node->left);
    PrintPreOrder(node->right);
}
int height(Node *node)
{
   // cout<<"IN HEIGHT";
    if(node==nullptr)return 0;
   
    return( 1+max(height(node->left),height(node->right) ));

}

 void printlevel(Node *root,int l)
 {
     //cout<<"In PrintLevel";
     if(root==nullptr)return ;
     if(l==1)
     {
         cout<<root->data<<" ";
         //return;
     }
     if(l>1)
     {
         printlevel(root->left,l-1);
        printlevel(root->right,l-1);
     }

 }

void printLevelOrder(Node *root)
{
    int i,h;
    h=height(root);
    cout<<"Height "<<h<<endl;
    for(i=1;i<=h;i++)
    {
        printlevel(root,i);
        
    }

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
    root->left->left->left=new Node(8);
    //PrintPreOrder(root);
    printLevelOrder(root);
}