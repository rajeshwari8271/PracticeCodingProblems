/*You are given an unordered array consisting of consecutive 
integers  [1, 2, 3, ..., n] without any duplicates. You are allowed to swap
 any two elements. Find the minimum number of swaps required to sort the array 
 in ascending order.

Example
Sample Input 0

4
4 3 1 2
Sample Output 0

3

Explaination:
0,2
1,2
1,3



*/



#include<iostream>
using namespace std;

int minSwaps(int a[],int n)
{
   int min= a[0],swap=0,idx=0;
    for(int i=0;i<n;i++)
    {  
       if(min>a[i])
       {
         min=a[i];
         idx = i;
       }

    }
    if(idx!=0)
    {
       int tmp=a[0];
       a[0]=a[idx];
       a[idx]=tmp;
       swap++;
    }

    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
   
    for(int cur=1;cur<n-1;cur++)
    {
      int pos = a[cur]-a[0];// 4 3 2 1
      while(a[pos]!=a[cur])
      {
         int tmp = a[pos];
         a[pos]=a[cur];
         a[cur] = tmp;
         swap++;
         pos=a[cur]-a[0];
      }
      pos = cur;

    }
 return swap;

}


int main()
{
  
   int a[]= {4, 3, 1, 2};
   int n = sizeof(a)/sizeof(a[0]);
   int swaps = minSwaps(a,n);
   cout<<"Minimum swaps required to sort is "<<swaps;

}