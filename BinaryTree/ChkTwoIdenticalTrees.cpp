#include<iostream>
using namespace std;
//USING RECURSION
class Node
{ 
   public: int data;
   Node * left,*right;
   Node(int d)
   {
       data=d;
       left=right=NULL;

   }

};

bool ChkIndentical(Node *X,Node *Y)
{
    if(X==nullptr && Y==nullptr)return 1;
    
   // if(X!=nullptr && Y!=nullptr)
        return((X->data==Y->data) && ChkIndentical(X->left,Y->left) && ChkIndentical(X->right,Y->right));


   // return 0;
}

int main()
{
   Node *X=new Node(1);
    Node *Y=new Node(1);
   // Node *Y=nullptr;
    //Node *X=nullptr;
    X->left=new Node(4);
    Y->left=new Node(4);
    X->right=new Node(5);
    Y->right=new Node(5);
    X->left->left=new Node(6);
    Y->left->left=new Node(6);
    X->left->right=new Node(7);
  Y->left->right=new Node(0);  
    if(ChkIndentical(X,Y))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    

}
