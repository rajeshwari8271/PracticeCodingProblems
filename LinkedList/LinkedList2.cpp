#include<iostream>
using namespace std;
struct Node
{
    int d;
    struct Node *next;
};


void addNode(struct Node **head,int k)
{
   struct Node *newnode = (struct Node*)malloc(sizeof(struct Node*));
   newnode->d = k;
   newnode->next = *head;
   *head = newnode;   
}

void printnode(struct Node *ptr)
{
    while(ptr !=NULL)
    {
        cout<<ptr->d<<" ";
        ptr = ptr->next;
    }
}

int searchNode(struct Node *ptr,int p)
{
    int flag = 0;
    while( ptr!= NULL)
    {
        if(ptr->d == p)
        {
           flag = 1;
           break;
        }
        else
        {
            ptr = ptr->next;
        }
    }

    return flag;
}

void DeleteNode(struct Node **node,int p )
{

    struct Node *ptr = *node;
     
    while(ptr)
    {
        if( ptr->d == p )
        {
            struct Node *tmp = ptr;
            ptr = ptr->next;
            free(tmp);
            tmp = NULL;
            cout<<p<<"is deleted"<<endl;
            break;

        }
        else if(ptr->next->d == p && ptr->next->next != NULL)
        {
            struct Node * tmp = ptr->next;
            ptr->next = ptr->next->next;
            free(tmp);
            tmp =NULL;
            cout<<endl<<p<<" is deleted 2"<<endl;
            break;
        }
        else if(ptr->next->d == p && ptr->next->next == NULL )
        {
            struct Node *tmp1 = ptr->next;
            ptr->next = NULL;
           delete(tmp1);
           tmp1 = NULL;
            cout<<endl<<p<<" is deleted 3"<<endl;
            break;
        }
        else{
            ptr = ptr->next;
        }

    }



}




int main()
{
    struct Node *head = NULL;

    addNode(&head,10);
    addNode(&head,20);
    addNode(&head,30);
    addNode(&head,40);
    addNode(&head,50);
    
    printnode(head);
    /*int x = searchNode(head,80);

     if(x)
        cout<<"\n item found\n"<<endl;
    else
        cout<<"\n Item not found";*/

    DeleteNode(&head,50);
    int x = searchNode(head,50);

     if(x)
        cout<<"\n item found\n"<<endl;
    else
        cout<<"\n Item not found"<<endl;
    
    printnode(head);

}