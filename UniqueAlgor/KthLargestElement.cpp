#include<iostream>
using namespace std;

int GetKth(int k,int a[],int start,int end)
{
    int p=a[end];
    int l=start;
    int r=end;
    while(true)
    {
        while(l<r && a[l]<p)
        {
            l++;
        }

        while(r>l && a[r]>=p)
        {
            r--;
        }
        if(l==r)
            break;
    
        swap(a[l],a[r]);
        

    }

    swap(a[l],a[end]);

    if(k==(l+1))return p;

    else if(k<(l+1))
        return GetKth(k,a,start,l-1);
    else
    {
        return GetKth(k,a,l+1,end);
    }
    


}

int findKthLargest(int a[],int k,int n)
{

    if(k<1 || a==NULL)
    return 0;
    else
    return  GetKth(n-k+1,a,0,n-1);

}

int main()
{
    int a[]={3,2,1,5,6,4,8};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"KTH LARGEST ELEMENT IN AN ARRAY "<<findKthLargest(a,k,n);

}