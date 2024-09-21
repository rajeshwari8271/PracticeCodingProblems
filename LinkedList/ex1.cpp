#include<iostream>
using namespace std;
struct Node
{
    int d;
    struct node *tmp;

};

int main()
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node*));
    ptr->d = 20;
    cout<<ptr->d<<endl;
    free(ptr);
    ptr = NULL;
    if(ptr->d)
        cout<<ptr->d<<endl;
    else
        cout<<"ptr is deleted";


}