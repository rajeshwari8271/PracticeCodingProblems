//CHECK SUBARRAY WITH SUM 0 EXISTS OR NOT
#include<iostream>
#include<unordered_set>
using namespace std;

bool SubArraySum(int a[],int n)
{
    unordered_set<int> s;
    s.insert(0);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(s.find(sum)!=s.end())
        {
            return true;
        }
        else
            s.insert(a[i]);
    }
    return false;
}

void PrintSubArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==0)
            {
                cout<<"{ ";
                for(int k=i;k<=j;k++)
                cout<<a[k]<<" ";
                cout<<"}\n";
                
            }
           
        }
         
    }
    
}

int main()
{
    int a[]={4,2,-3,-1,0,4};
    int n = sizeof(a)/sizeof(a[0]);

    SubArraySum(a,n)?cout<<"Subarray with sum zero exists\n":cout<<"Subarray with sum zero doesnot exist\n";

    PrintSubArray(a,n);


}