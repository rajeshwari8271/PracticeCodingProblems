#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *nxt;

};

void createList(node **head,int p)
{
   // cout<<"In cteate ";
    struct node* newnode=(struct node *)malloc(sizeof(struct node*));
    newnode->data=p;
    newnode->nxt=*head;
    *head=newnode;
       
}

void printList(struct node *head)
{
    struct node* ptr=head;
   // cout<<"In PrintNode";
    while(ptr)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->nxt;
    }


}

struct  node* CopyList(struct node * head)
{
    struct node* newlist1=NULL;
    struct node* curr=head;
    struct node* tail=NULL;
    while(curr!=NULL)
    {
        if(newlist1==NULL)
        {
            newlist1=(struct node *)malloc(sizeof(struct node*));
            newlist1->data=curr->data;
            newlist1->nxt=NULL;
            tail=newlist1;
        }
        else
        {
            tail->nxt=(struct node *)malloc(sizeof(struct node*));
            tail=tail->nxt;
            tail->data=curr->data;
            tail->nxt=NULL;
        }
        

    curr=curr->nxt;
    }

return newlist1;
}

int main()
{
    int k[]={1,2,3},i;
    int n=sizeof(k)/sizeof(k[0]);
    cout<<n<<endl;
    struct node *head=NULL;
    for(i=n-1;i>=0;i--)
    {
    createList(&head,k[i]);}
    printList(head);
    struct node* newlist=CopyList(head);
    cout<<"\ncopied list is\n";
    printList(newlist);


}