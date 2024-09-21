#include<iostream>
using namespace std;
void FindPair(int a[],int sum,int n)
{
    int i,j;
    pair<int,int> p;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    //{2,5,3,10,12}
    for(i=0;i<n;i++)
    {
        
        //for(j=0; j<n,a[j]!=a[i];j++)
         for(j=0; j<n,i!=j;j++)
        {
            if((a[i]+a[j])==sum)
               {
                p.first=a[i];
                p.second=a[j];
               
               }
              

        }

    
    }
    cout<<"["<<p.first<<" "<<p.second<<"]";


}
int main()
{
    int a[]={2,5,3,9,5};
    int sum=10;
    int n= sizeof(a)/sizeof(a[0]);
    FindPair(a,sum,n);
}

