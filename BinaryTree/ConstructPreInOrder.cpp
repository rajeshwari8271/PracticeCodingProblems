//Construct Tree from given preorder and post order
#include<iostream>
using namespace std;
class Node
{
  public:  char data;
    Node *left,*right;
    Node(char d)
    {
        data=d;
        left=right=NULL;
    }

};
int search(char in[],int start,int n,int d)
{
    for(int i=start;i<=n;i++)
    {
        if(in[i]==d)
            return i;

    }
    
}
Node *constructTree(char in[],char pre[],int start,int n)
{
    if(start>n)return NULL;
    static int preIndex=0;
    Node *newNode=new Node(pre[preIndex++]);
    if(start==n)return newNode;
    int index=search(in,start,n,newNode->data);
    newNode->left= constructTree(in,pre,start,index-1);
    newNode->right= constructTree(in,pre,index+1,n);
    return newNode;

}



void PrintPreorder(Node *root)
{
    if(root==NULL)return ;
    cout<<root->data<<" ";
    PrintPreorder(root->left);
    PrintPreorder(root->right);

}
void PrintInorder(Node *root)
{
    if(root==NULL)return ;
    PrintInorder(root->left);
    cout<<root->data<<" ";
    PrintInorder(root->right);

}

int main()
{
    char in[] ={ 'D', 'B', 'E', 'A', 'F', 'C' };  
    char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' }; 
    int n=sizeof(in)/sizeof(in[0]);
    Node* root=constructTree(in,pre,0,n-1);
    cout<<"print Preorder\n";
    PrintPreorder(root);
     cout<<"\n print Inorder\n";
    PrintInorder(root);

}

