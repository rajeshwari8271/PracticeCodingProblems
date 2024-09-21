//Convert Tree to doubly linked list

#include<iostream>
using namespace std;
class Node
{
 public:   int data;
    Node *left,*right;
    Node(int d)
    {
        data=d;
        left=right=nullptr;
    }
};

void Convert(Node *node,Node *&head)
{
    if (node==nullptr)return ;
    static Node * prev=nullptr;
    Convert(node->left,head);
    if(prev==nullptr)
        {
            head=node;
        }
    else
    {
        node->left=prev;
        prev->right=node;
        
    }
    prev=node;

    Convert(node->right,head);
    
}
void printDLL(Node *&head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->right;
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
    Node *head=nullptr;

    Convert(root,head);
    printDLL(head);

}