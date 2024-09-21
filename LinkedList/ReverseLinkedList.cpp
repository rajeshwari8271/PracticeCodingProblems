#include<iostream>
class Node
{
    public:int data;
    class Node *Next;
};

void push(Node **ptr,int d)
{
    Node * newNode=new Node();
    newNode->data=d;
    newNode->Next=*ptr;
    *ptr=newNode;
}

void printNode(Node *ptr)
{
    std::cout<<std::endl<<"In PrintNode"<<" ";
    while(ptr!=NULL)
    {
       std::cout<<ptr->data;
        ptr=ptr->Next;

    }
}

void Reverse(Node **ptr)
{
    Node *current=*ptr;
    Node *prev=NULL,*Next=NULL;//1 2 3 4 5
    
    std::cout<<std::endl<<"In Reverse";
    while(current)
    {

        Next=current->Next;//2 3
        current->Next=prev;//0 1
        prev=current;//1  2
        current=Next;//2 3
    }
   *ptr=prev;
   printNode(prev);

}

int main()
{
    Node *head=NULL;
    int arr[]={1,2,3,4,5};
    int i;
    int l;
    l=sizeof(arr)/sizeof(arr[0]);
    for(int i=l-1;i>=0;i--)
    {
        push(&head,arr[i]);
    }
    printNode(head);
    Reverse(&head);
    printNode(head);
}
