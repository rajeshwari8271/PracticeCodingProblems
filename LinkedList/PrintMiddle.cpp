#include<iostream>
void push(struct Node**,int newData);
void printNode(struct Node *ptr);
void printMiddle(struct Node *ptr);
struct Node{
    int data;
    struct Node* next;
};
int main()
{
    struct Node *head=NULL;
    int i;
    for(i=5;i>0;i--)
    {
        push(&head,i);
    }
        printNode(head);
        printMiddle(head);
   // }


}
void push(struct Node **headRef,int newData)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node*));
    newNode->data=newData;
    newNode->next=*headRef;
    *headRef=newNode;

}
void printNode(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        std::cout<<"->"<<ptr->data;
        ptr=ptr->next;
    }
    std::cout<<std::endl;
}
void printMiddle(struct Node *ptr)
{
    int cnt=1;
    struct Node *slow_ptr=ptr;
    struct Node *fast_ptr=ptr;

   //1 2 3 4 5
    
        while(fast_ptr!=NULL && fast_ptr->next !=NULL)
        {
            slow_ptr=slow_ptr->next;
            fast_ptr=fast_ptr->next->next;
        }
        
    {
        std::cout<<"Middle element is "<<slow_ptr->data;

    }     
    /* 
    BELOW CODE TAKES O[N POW 2]
    while(ptr->next!=NULL){
        ptr=ptr->next;
    cnt++;}
    std::cout<<cnt<<std::endl;
    int m=0;
    while(m!=cnt/2)
    {
        mid=mid->next;
        m++;
    }
    if(mid!=NULL)
   std::cout<<mid->data;
 */
}
