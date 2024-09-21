/*

A left rotation operation on an array shifts each of the array's elements 
 unit to the left. For example, if  left rotations are performed on array , 
 then the array would become . Note that the lowest index item moves to the highest index 
 in a rotation. This is called a circular array.

Given an array  of  integers and a number, , perform  left rotations on the array. 
Return the updated array to be printed as a single line of space-separated integers.

Sample Input:

5 4
1 2 3 4 5
Sample Output

output:
5 1 2 3 4
Explanation

When we perform d=4  left rotations, the array undergoes the following sequence of changes:

*/
#include<iostream>
using namespace std;

void rotateArray(int a[],int n, int k)
{
    int p=1;
    while(p<=k)
    {
        int last=a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];   
        }
        a[n-1]=last;
        p++;
    }

}

void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}



int main()
{
    int a[] = {1,2,3, 4,5};
    int n= sizeof(a)/sizeof(a[0]);
    int k=4;
    cout<<"Before Rotatation\n";
    printarray(a,n);
    rotateArray(a,n,k);
    cout<<"After Rotatation\n";
    printarray(a,n);
}