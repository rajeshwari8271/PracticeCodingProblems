#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter Limit";
    cin>>n;
    int n1=0;
    int n2=1,nn;
    cout<<n1<<" "<<n2<<" ";
    while(i<n-2)
    {
        nn=n1+n2;
        cout<<nn<<" ";
        n1=n2;
        n2=nn;
        i++;

    }
}