#include<iostream>
using namespace std;
class Node
{
  public:  int data;
    Node *l,*r;
    Node(int d)
    {
        data=d;
        l=r=nullptr;
    }
};

void leftview(Node* root,int l,int *max)
{
    if(root==NULL)return;
    if(*max<l)
    {
        cout<<root->data<<" ";
        *max=l;
    }
    leftview(root->l,l+1,max);
    leftview(root->r,l+1,max);


}

void printLeftView(Node *root)
{
    int maxlen=0;
    leftview(root,1,&maxlen);
}

int main()
{
    Node *root=new Node(1);
    root->l=new Node(2);
    root->l->r=new Node(4);
    root->r=new Node(3);
    root->r->l=new Node(5);
    root->r->r=new Node(6);
    root->r->l->l=new Node(7);
    root->r->l->r=new Node(8);
    printLeftView(root);

}