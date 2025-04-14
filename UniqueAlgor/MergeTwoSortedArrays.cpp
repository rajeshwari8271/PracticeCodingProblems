//MERGE TWO SORTED ARRAYS
#include<iostream>
using namespace std;

void merge(int a[4],int b[4],int m,int n)
{
    int c[8],i=0,j=0,k=0,p;
    /*
    int a[]={2,3,4,5};
    int b[]={1,6,7,8};*/
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
        
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
for(k=0;k<(m+n);k++)
{
    cout<<c[k]<<" ";
}

}
int main()
{
    int a[]={4,5};
    int b[]={1,6,7,8};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);

    merge(a,b,m,n);

}
