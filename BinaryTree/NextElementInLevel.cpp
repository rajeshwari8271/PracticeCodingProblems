#include<iostream>
#include<list>
using namespace std;
class Node
{
  public:  int data;
    Node * left,*right;
    Node(int d)
    {
        data=d;
        left=right=nullptr;
    }
};

Node * NextElementOfNode(Node *node,int key)
{
    if(node==NULL)return NULL;
    std::list<Node*> Mylist;
    Mylist.push_back(node);
    Node * front=nullptr;;
    while(!Mylist.empty())
    {

        int size=Mylist.size();
       // cout<<"size= "<<size<<endl;
        while(size--)
        {
            front=Mylist.front();

           // cout<<"front= "<<front->data<<" ";
            Mylist.pop_front();

            
            if(front->data==key)
            {
                if(size==0)
                    return NULL;
                return Mylist.front();
            }
            if(front->left)
                Mylist.push_back(front->left);
            if(front->right)
                Mylist.push_back(front->right);

        }


    }

 return nullptr;
}


int main()
{
    Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
     root->right->left=new Node(6);
    root->right->right=new Node(7);
    Node * nextNode=NextElementOfNode(root,7);
    if(nextNode)
        cout<<"Next element of Node 7 is "<<nextNode->data;
    else
    {
        cout<<"Next Element not found";
    }
    



}