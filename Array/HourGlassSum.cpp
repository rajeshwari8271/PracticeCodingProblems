/*
Given a  2D Array, :

1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
An hourglass in  is a subset of values with indices falling in this pattern in 's graphical
 representation:

a b c
  d
e f g
There are  hourglasses in . An hourglass sum is the sum of an hourglass' values. 
Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum. 
The array will always be .

Example


-9 -9 -9  1 1 1 
 0 -9  0  4 3 2
-9 -9 -9  1 2 3
 0  0  8  6 6 0
 0  0  0 -2 0 0
 0  0  1  2 4 0
The  hourglass sums are:

-63, -34, -9, 12, 
-10,   0, 28, 23, 
-27, -11, -2, 10, 
  9,  17, 25, 18
The highest hourglass sum is 28 from the hourglass beginning at row , column :

0 4 3
  1
8 6 6

The hourglassSum function expects an array of arrays.

Since the minimum value of any position is -9, the minimum value of the sum is -63.

*/

#include<iostream>
using namespace std;
 
 int findSum(int a[6][6],int n)
 {
    int maxi = -63;
    for(int i=0;i<4;i++)
    {   
        for(int j=0;j<4;j++)
        {
            int sum=0;
            sum= (a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            maxi= sum>maxi?sum:maxi;
        }
    }
    return maxi;
 }



int main()
{
    int a[6][6] ={
{1, 1, 1, 0, 0, 0},
{0, 1, 0, 0, 0, 0},
{1, 1, 1, 0, 0, 0},
{0, 0, 2, 4, 4, 0},
{0, 0, 0, 2, 0, 0},
{0, 0, 1, 2, 4, 0} };

cout<<"Sum of hourglass array is "<<findSum(a,6);

}