#include<iostream>
using namespace std;
class Node
{
  public:  int data;
            Node * left,*right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};



Node *constructTree(int pre[],int post[],int st,int n)
{
    if(st>n)return NULL;
    static int PreIndex=0;
    Node *root=new Node(pre[PreIndex]);
    ++PreIndex;
    if(st==n)return root;
    int i;
    for(i=st;i<=n;i++)
    {
        if(post[i]==pre[PreIndex])
        break;
    }
    if(i<n)
    {
        root->left=constructTree(pre,post,st,i);  
        root->right=constructTree(pre,post,i+1,n);
    } 
  return root;
}

 void printPostOrder(Node * node)
{
    if(node==NULL)return;
    printPostOrder(node->left);
    printPostOrder(node->right);
    cout<<node->data<<" ";

}
void PrintPreOrder(struct Node *node)
{
    if(node==NULL)return;
    cout<<node->data<<" ";
    PrintPreOrder(node->left);
    PrintPreOrder(node->right);
}
void PrintInOrder(struct Node *node)
{
    if(node==NULL)return;
    PrintInOrder(node->left);
    cout<<node->data<<" ";
    PrintInOrder(node->right);


}

int main()
{
     int pre[] =  {1, 2, 4, 8, 9, 5, 3, 6, 7};  
     int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1}; 
     int n=sizeof(pre)/sizeof(pre[0]); 
     Node* root=constructTree(pre,post,0,n-1);
     printPostOrder(root);
     cout<<endl;
     PrintInOrder(root);
     cout<<endl;
     PrintPreOrder(root);
}