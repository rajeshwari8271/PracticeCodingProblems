#include<iostream>
using namespace std;
//count no of zeros and fill zeros to first no os zeros with zeros and remaining with ones
void SortBinary(int a[],int n)
{
    int zerocnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            zerocnt++;
    }
    cout<<"cnt "<<zerocnt<<"\n";
    int k=0;
    while(zerocnt--)
    {
        a[k++]=0;
    }
    while(k<n)
    {
        a[k++]=1;
    }

    for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
}


int main()
{
    int a[]={0,0,1,0,1,1,0,0,0};
    int n=sizeof(a)/sizeof(a[0]);
    SortBinary(a,n);
}