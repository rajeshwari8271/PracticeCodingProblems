#include<iostream>
using namespace std;
int main()
{
    char ch;
    int m,n;
    cout<<"ADD type A\n"<<"SUBTRACTION type S\n"<<" Multiplication type m\n"<<" Division type d\n";
    cin>>ch;
    cout<<"\nEnter nums";
    cin>>m>>n;

    if(ch=='A')
        cout<<(m+n);
    else if(ch=='S')
        cout<<(m-n);
    else if(ch=='m')
        cout<<(m*n);
    else if(ch=='d')
        cout<<(m/n);
}