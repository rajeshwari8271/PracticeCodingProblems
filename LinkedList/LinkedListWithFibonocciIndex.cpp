#include<iostream>
#include<vector>
using namespace std;
class Node
{
  public:  int data;
            Node *nxt;
    
};

void append(Node **node,int d)
{
    Node *newNode=new Node();
    newNode->data=d;
    newNode->nxt=*node;  
    *node=newNode;
}
void printnode(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->nxt;
    }
}
//print elements which have fibonocci index
void modifyFiboIndex(Node *ptr)
{
    int cnt=0;
    Node *nod=ptr;
    Node *ptr2=ptr;
    while(ptr!=NULL)
    {
        cnt++;
        ptr=ptr->nxt;
    }
    cout<<"count "<<cnt<<" "<<endl;
    vector<int> v={0,1,2,3,5,8};
    int i=0;
    int n1=0;
    int n2=1,nn;
    v.push_back(n1);
    
    while(i<cnt-2)
    {
        nn=n1+n2;
        v.push_back(nn);
        n1=n2;
        n2=nn;
        i++;

    }
    vector<int>::iterator it;
    Node *ptr3=ptr2;
     for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<"linked list with fibonocci index are"<<endl;
    for(it=v.begin();it!=v.end();it++)
    {
        //cout<<*it<<" ";
        Node *ptr4=ptr3;
        if(*it==0)
            cout<<ptr2->data<<" ";
        else if(*it==1)
        {
            ptr2=ptr2->nxt;
            cout<<ptr2->data<<" ";
        }
        else
        {
            int p=0;
            while(p<*it)
            {
                ptr4=ptr4->nxt;
                p++;
            }
            cout<<ptr4->data<<" ";

            
        }
        
        

    }



    
    


}

int main()
{
    Node *head=NULL;
    append(&head,6);
    append(&head,5);
    append(&head,4);
    append(&head,3);
    append(&head,2);
    append(&head,1);
    printnode(head);
    modifyFiboIndex(head);

}
