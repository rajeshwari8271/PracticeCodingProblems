#include<iostream>
using namespace std;
int firstoccurence(int a[],int l,int n,int x)
{
    int low=l;//{2,3,4,6,7,8,5,9};
    int high=n,res=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==a[mid])
        {
            res=mid;
           high=mid-1;
           
        }
        else if(x>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    return res;

}
int lastoccurence(int a[],int l,int n,int x)
{
    int low=l;
    int high=n;
    int res=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(x==a[mid])
        {
            res=mid;
            low=mid+1;
            
        }
        else if(x>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }

    return res;
}
int main()
{
    int a[]={2,3,4,5,6,7,8,9,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"n "<<n<<endl;
    int x=5;
    int f=firstoccurence(a,0,n-1,x);
    if(f)
        cout<<"First occurrence of "<<x<<" is "<<f;
    else
    {
        cout<<"\nelement not found";
    }
     int l=lastoccurence(a,0,n-1,9);
    if(l)
        cout<<"\nLast occurrence of is "<<l;
    else
    {
        cout<<"\nelement not found";
    }
    

}