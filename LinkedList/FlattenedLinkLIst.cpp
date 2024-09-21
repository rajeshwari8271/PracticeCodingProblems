/*
3->10->23->25
|   |   |  |
4   34  28  29
|    |   |  |
9    55 38 50

TO
 
 3->4->8->9->10->11->19->23->25->50
 */
#include<iostream>
class Node
{
   public: int data;
           Node *right;
           Node *down;

};
void addNode(Node **ptr,int m)
{
    Node *newNode=new Node();
    newNode->data=m;
    newNode->right=NULL;
    newNode->down=*ptr;
    *ptr=newNode;
    //std::cout<<"In AddNode"<<ptr<<std::endl;
    //std::cout<<newNode->data<<std::endl;
    //std::cout<<(*ptr)<<std::endl;

}
void printNode(Node *ptr)
{
   // std::cout<<"in printNode"<<std::endl;
    //std::cout<<ptr<<std::endl;

    while(ptr!=NULL)
    {
        std::cout<<ptr->data<<" ";
        //std::cout<<ptr<<std::endl;
        ptr=ptr->down;

    }
    
}
Node * merge(Node *root1,Node * root2)
{
    if(root1==NULL)return root2;
    if(root2==NULL)return root1;
    
    Node * result;
    if(root1->data < root2->data)
        {
            result=root1;
            result->down = merge(root1->down,root2);
        }
    else
        {
             result=root2;
             result->down = merge(root1,root2->down);
        }
        
      result->right=NULL;
     return result;

}
 Node * FlattenHead(Node * root)
 {
    if((root==NULL)||(root->right==NULL))
        return root;
    
    
    return(merge(root,FlattenHead(root->right)));
    
  }
int main()
{
    Node *head=NULL;
    //std::cout<<"In Main"<<head<<std::endl;
    //std::cout<< &(head)<<std::endl;
    addNode(&head,3);
    addNode(&head,4);
    addNode(&head,9);

    addNode(&(head->right),10);
    addNode(&(head->right),34);
    addNode(&(head->right),55);

    addNode(&(head->right->right),23);
    addNode(&(head->right->right),28);
    addNode(&(head->right->right),38);
    
    addNode(&(head->right->right->right),25);
    addNode(&(head->right->right->right),29);
    addNode(&(head->right->right->right),50);
    /* printNode(head);
    printNode(head->right);
    printNode(head->right->right);
    printNode(head->right->right->right); */
    head=FlattenHead(head);
    printNode(head);

}

