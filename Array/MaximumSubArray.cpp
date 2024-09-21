#include<iostream>
#include<algorithm>
using namespace std;
/*
    a={-2 ,1 ,-3, 4, -1, 2, 1, -5, 3};
    o/p=6
    */
   int kadane(int a[],int n)
   {
       int i,maxIncrease=a[0];
       int maxGlobal=a[0];
       for(i=1;i<n-1;i++)
       {
           maxIncrease=  max(a[i], maxIncrease+a[i]);
           //cout<<"MaxI "<< maxIncrease <<" ";
           if(maxIncrease>maxGlobal)
           {
               maxGlobal=maxIncrease;
           }

       }
       return maxGlobal;

   }

int main()
{
    int a[]={3,4,5,-3,-2,1};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<kadane(a,n);
}