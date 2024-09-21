//FIND DUPLICATE ELEMENT IN AN ARRAY
#include<iostream>
using namespace std;
//below code o(n*n)
/* int FindDuplicate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int p=a[i];
        for(int j=0;j<n && j!=i ;j++)
        {
            if(p==a[j])
                return p;

        }
        
    }
    return 0;
} */

int FindDuplicate(int a[],int n)
{
    bool visited[6];
    fill(visited,visited+n,0);
    for(int i=0;i<n;i++)
    {
        if(visited[a[i]])
        return a[i];
        visited[a[i]]=true;
    }
    return 0;

}
int main()
{
    int a[]={1,2,3,4,8,4};
    int n=sizeof(a)/sizeof(a[0]);
    int k=FindDuplicate(a,n);
    if(k)
        cout<<"Duplicate element is "<<k;
    else
    {
        cout<<"No Duplicate in given array";
    }
    
}