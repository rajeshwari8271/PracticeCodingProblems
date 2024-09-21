//find the root of binary treeRoot

//IDEAS
//1. If you have access to any node in the tree, you could make a traverse for every node, 
//and see from what node you get the most children. That will run in O(n^2)
//2. 
#include<iostream>
#include<set>
using namespace std;
class Node
{
  public: int data;
   Node *left;
   Node *right;
   Node(int d)
   {
     data = d;
     left = NULL;
     right = NULL;
   }
 };

int FindParent(set<Node *> nodes)
{


}

 int main()
 {
     Node *root=new Node(1);
     set<Node*> s;
     //Node *node5;
     s.insert(root);
     root->left = new Node(2);
     root->right = new Node(3);
     root->left->left = new Node(4);
     root->left->right = new Node(5);
     root->right->left = new Node(6);
     root->right->right = new Node(7);
    // node5=root->right->right;

    s.insert(root->left);
    s.insert(root->left->left);
    s.insert(root->right);
    s.insert(root->left->right);
    s.insert(root->right->right);

    set<Node *>::iterator it;
    cout<<"Contents of set are ";
    for(it=s.begin();it!=s.end();it++)
      cout<<(*it)->data<<" ";

    FindParent(s);

     
     
     


     //cout<<"Parent Node is"<<FindParent(node5);
 }