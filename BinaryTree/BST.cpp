#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* left,*right;
};

struct Node *newnode(int da)
{
    struct Node * tmp = (struct Node *)malloc(sizeof(struct Node *));
    tmp->data = da;
    tmp->left = tmp->right = NULL;

    return tmp;
}

struct Node *insert(struct Node *node,int d)
{
    if(node == NULL )return newnode(d);

    if(d < node->data) 
        node->left = insert(node->left,d);
    
    else
        node->right = insert(node->right,d);


return node;

} 

void printInorder(Node * node)
{

   if(node == NULL) return;

   printInorder(node->left);
   cout<<node->data<<" ";
   printInorder(node->right);

}

struct Node *FindMinValNode(struct Node * node)
{
    struct Node * node1 = node;

    while(node1->left != NULL)
    {
        node1 = node1->left;
    }
    return node1;

}

struct Node * FindMaxValNode(struct Node * node)
{
    struct Node * node1 = node;

    while(node1->right != NULL)
    {
        node1 = node1->right;
    }

    return node1;

}

struct Node * deleteNode(struct Node *root,int k)
{
   if(root == NULL )return NULL;

   if(k<root->data)
   {
      deleteNode(root->left,k);
   }
   else if(k>root->data)
   { 
    deleteNode(root->right,k);
   }
   else
   {
       if((root->left == NULL) && (root->right == NULL))
       {
        return NULL;
       }
       if(root->left == NULL)
       {
          /*struct Node* tmp = root->right;
          root= NULL;
          return tmp;*/
          struct Node* tmp = root;
          root= root->right;
          tmp = NULL;
          return root;
       }
       else if(root->right == NULL)
       {
         /* struct Node * tmp = root->left;
          root = NULL;
          return tmp;*/
          struct Node* tmp = root;
          root= root->left;
          tmp = NULL;
          return root;
       }
       else
       {
          struct Node * tmp = FindMinValNode(root->right);
          root->data = tmp->data;
          root->right = deleteNode(root->right, tmp->data);

       }
    

   }
        
return root;

}

int main()
{
    struct Node * root = NULL;
    root = insert(root,8);
    root = insert(root,3);
    root = insert(root,1);
    root = insert(root,6);
    root = insert(root,7);
    root = insert(root,10);
    root = insert(root,14);
    root = insert(root,28);

    //root = deleteNode(root,6);
    
    printInorder(root);

    struct Node *node2 = FindMinValNode(root);

    cout<<"\nMinimum Value Node "<< node2->data<<endl;

    struct Node * node3 = FindMaxValNode(root);

    cout<<"\n Maximum Value Node "<< node3->data<<endl;
   cout<<"\n Deleteing Node "<<endl;
    root = deleteNode( root, 6 );
    printInorder(root);

}