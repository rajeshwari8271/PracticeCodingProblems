/*
INPUT:
    X= 5->7->3->4
    Y= 9->4->6
OUTPUT:
6->6->8->0

*/
#include<iostream>
class node
{
  public: int data;
          node * nxt;
} ;
node *createnewnode(int d)
{
    node *newnode=new node();
     newnode->data=d;
    newnode->nxt=NULL;
    
}

void push(node **head,int d)
{
    node *newnode=createnewnode(d);
    //newnode->data=d;
    newnode->nxt=*head;
    *head=newnode;
}

void printnode(node *ptr)
{
    while(ptr)
    {
        std::cout<<ptr->data<<" ";
        ptr=ptr->nxt;
    }
}

void reverse(node **head)
{
    node *current=*head;
    node *nxt=NULL,*prev=NULL;
    while(current)
    {
        nxt=current->nxt;
        current->nxt=prev;
        prev=current;
        current=nxt;

    }
    *head=prev;
   

}
void addlists(node * A,node *B,node **out)
{
    int carry=0;
   node  *head=NULL;
    
    while(A||B)
    {
        int sum=0;
        
        if(A)
            sum+=A->data;
          

        if(B)
            sum+=B->data;
            

        sum+=carry;
        carry=sum/10;
        sum=sum%10;
        node *res=createnewnode(sum);
        if(head==NULL)
            {
                
                head=res;
               *out=head;
            }
        else
        {
            head->nxt=res;
            head=res;
            
                       
        }
       
   if(A)
        A=A->nxt;
    if(B)
        B=B->nxt;

    
    }
       
if(carry)
  {
      push(&(head->nxt),carry);

  }

  
}


 node *add(node * A,node *B)
{
    node *out=NULL;
    reverse(&A);
    reverse(&B);
    addlists(A,B,&out);
    reverse(&out);
    return out;

}
int main()
{
    node *A=NULL,*B=NULL,*res;
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9};
    int l1=sizeof(a)/sizeof(a[0]);
    int l2=sizeof(b)/sizeof(b[0]);
    int i,j;
    for(i=l1-1;i>=0;i--)
        push(&A,a[i]);
    for(j=l2-1;j>=0;j--)
        push(&B,b[j]);
     
    
    res=add(A,B);
    printnode(res);


}


