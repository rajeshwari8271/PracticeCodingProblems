#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
/* //O(n*n)
void findPair(int ar[],int n,int s)
{
    int i,j,m,p;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n && j!=i;j++)
        {
            if((ar[i]+ar[j])==s)
            {
                m=i;
                p=j;
                break;

            }

        }
    }

    cout<<m<<" "<<p;

} */

//O(n *log n) using sorting and binary search


/* void findPair(int ar[],int n,int s)
{
    int low=0,high=n-1;
    std::sort(ar,ar+n);
    for(int i=0;i<n;i++)
    cout<<ar[i]<<" " ;
    while(low<high)
    {
        if(ar[low]+ar[high] == s)
        {
            cout<<"Pair found "<<low<<" "<<high;
            return;
        }
        else
        ((ar[low]+ar[high])<s)?low++:high--;
    }
    cout<<"Pair Not Found";

} */

//o(n)
void findPair(int ar[],int n,int s)
{
    unordered_map<int,int> u;
    int i;
    for(i=0;i<n;i++)
    {
        if(u.find(s-ar[i]) != u.end())
        {
            cout<<"Pair Found at "<<u[s-ar[i]]<<" "<<i;
            return;
        }
        u[ar[i]]=i;

    }
    cout<<"Pair not found";






}

int main()
{
    int ar[]={8,7,2,5,3,1};
    int n=sizeof(ar)/sizeof(ar[0]);
    int s=10;
    findPair(ar,n,s);

}