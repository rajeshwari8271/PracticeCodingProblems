/*
Given an integer array nums, return an array answer such that answer[i] is equal to the
 product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6] */
#include<iostream>
using namespace std;

void printAr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void Product(int a[],int n)
{
   
  
    int b[10];
    for(int i=0;i<n;i++)
    {
        int mul=1;
        for(int j=0;(j<n); j++)
        {
            if(j!=i)
            {
            mul*=a[j];
            }

        }
        b[i]=mul;
        //cout<<mul<<" ";
    }
    printAr(b,n);

}


int main()
{
    int a[]={1,2,3,4};
    int n = sizeof(a)/sizeof(a[0]);
    Product(a,n);
    

}