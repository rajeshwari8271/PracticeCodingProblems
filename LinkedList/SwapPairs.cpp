#include<iostream>
using namespace std;

class Node
{
    public: int data;
            Node * next;
};

void addNode(Node **head,int d)
{
    Node *newNode = new Node();
    newNode->data = d;
    newNode->next = *head;
    *head = newNode;
}

void printNode(Node *ptr)
{
    while(ptr!= NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

Node * swapNodePair(Node *head)
{
     Node *curr = head;
     Node *newNode = head->next;
    while(curr != NULL && curr->next != NULL)
    {
        Node *tmp = curr->next;//1 2 3 4 5
        curr->next = curr->next->next;
        tmp->next = curr;
        curr = curr->next;
        cout<<"m = "<<curr->data<<endl;
       if (curr != NULL && curr->next != NULL)
        {
           tmp->next->next = curr->next;
           
        }
        
    }
    return newNode;

}




int main()
{
    Node *head = NULL;

    for(int i=7;i>=1;i--)
    {
        addNode(&head,i);
    }
    printNode(head);

   Node * newNod = swapNodePair(head);
   cout<<endl;
    printNode(newNod);
}