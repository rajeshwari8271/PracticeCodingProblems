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

void RightView(Node *root,int l,int *max)
{
    if(root==nullptr)return;
    cout<<*max<<" "<<endl;
    if(*max<l)
    {
        cout<<root->data<<" ";//<<*max<<" ";
        *max=l;
    }
    RightView(root->r,l+1,max);
    RightView(root->l,l+1,max);

}
void printRightView(Node *root)
{
    int level=1,maxlen=0;
    RightView(root,level,&maxlen);

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
    printRightView(root);

    
}