#include<iostream>
using namespace std;
class Node
{
    public:int data;
    Node * left,*right;
    Node(int d)
    {
        data=d;
        left=right=NULL;
    }
};

int search(int in[],int st,int n,int d)
{
    int i;
    for(i=st;i<=n;i++)
    {
        if(in[i]==d)
        break;
    }
    return i;
}
Node *ConstructTree(int in[],int post[],int st,int n) 
{
    static int preIndex=n;
    
    if(st>n||preIndex<0)return NULL;

    Node *newnode=new Node(post[preIndex--]);
    
    if(st==n)return newnode;
    int index=search(in,st,n,newnode->data);
    newnode->right=ConstructTree(in,post,index+1,n);//First construct the right subtree 
    newnode->left=ConstructTree(in,post,st,index-1);
    //newnode->right=ConstructTree(in,post,index+1,n);
    return newnode;
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
    int in[] =  {8, 4, 9 ,2 ,5 ,1, 6 ,3 ,7 };  
     int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1}; 
     int n=sizeof(in)/sizeof(in[0]);
     Node * root=ConstructTree(in,post,0,n-1) ;
     printPostOrder(root);
     cout<<endl;
     PrintInOrder(root);
     cout<<endl;
     PrintPreOrder(root);
}