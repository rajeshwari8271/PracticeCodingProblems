#include<iostream>
using namespace std;
class Node
{
    public:int data;
    Node *left,*right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }

};
Node *FindMin(Node *curr)
{
    while(curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;

}

Node *DeleteNode(Node *&root,int k)
{
    //Base Case
    if(root==NULL)return NULL;
    //if k<root->data
    if(k<root->data)DeleteNode(root->left,k);
    //if k>root->data
    else if(k>root->data)DeleteNode(root->right,k);
    //if k==root->data
    else
    {
        // NO CHILD
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        //if only one child(RIGHT CHILD IS PRESENT)
        else if(root->left==NULL)
        {
            Node *tmp=root;
            root=root->right;
            delete tmp;

        }
        //if only one child(LEFT CHILD IS PRESENT)
        else if(root->right==NULL)
        {
            Node *tmp=root;
            root=root->left;
            delete tmp;
        }
        else
        {
            //if Two children
            Node *tmp=FindMin(root->right);
            root->data=tmp->data;
            root->right=DeleteNode(root->right,tmp->data);

        }
        
    }
    return root;

}
void  PrintInorder(Node *root)
{
    if(root==NULL) return;
    PrintInorder(root->left);
    cout<<root->data<<" ";
    PrintInorder(root->right);
}
int main()
{
    Node *root=new Node(50);
    root->left=new Node(30);
    root->left->left=new Node(20);
    root->left->right=new Node(40);
    root->right=new Node(70);
    root->right->left=new Node(60);
    root->right->left->left=new Node(55);

    root->right->right=new Node(80);
    //BeforeDelete
    PrintInorder(root);
    DeleteNode(root,60);
    //After Delete
    cout<<endl;
    PrintInorder(root);


}