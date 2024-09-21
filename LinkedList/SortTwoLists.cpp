#include<iostream>
class Node
{
   public:
    int data;
    Node * next;
};
void printlist(Node *ptr)
{
    
    while(ptr!=NULL)
    {
        std::cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    //std::cout<<"NULL";
}
void push(Node **head,int d)
{
    Node * newNode=new Node();
    newNode->data=d;
    newNode->next=*head;
    *head=newNode;
}
Node * SortedMergeList(Node *head1,Node *head2)
{
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    Node *res=NULL;
    if(head1->data <= head2->data)
        {
            res=head1;
            res->next=SortedMergeList(head1->next,head2);
        }
    else
        {
            res=head2;
            res->next=SortedMergeList(head1,head2->next);
        }
        
    return res;

}
int main()
{
    Node * head1=NULL,* head2=NULL;//* result;
    int a[]={7,5,3,1},i,j;
    for(i=0;i<4;i++)
    {
        push(&head1,a[i]);

    }
    int b[]={6,4,2};
    for(j=0;j<3;j++)
    {
        push(&head2,b[j]);

    }
    printlist(head1);
    std::cout<<std::endl;
    printlist(head2);
     std::cout<<std::endl;
    Node *result=SortedMergeList(head1,head2);
    printlist(result);
}