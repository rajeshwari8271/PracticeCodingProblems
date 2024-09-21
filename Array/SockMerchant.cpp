/*
here is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

Example


There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

Function Description

Complete the sockMerchant function in the editor below.

sockMerchant has the following parameter(s):

int n: the number of socks in the pile
int ar[n]: the colors of each sock
Returns

int: the number of pairs
Input Format

The first line contains an integer , the number of socks represented in .
The second line contains  space-separated integers, , the colors of the socks in the pile.

Constraints

 where 
Sample Input

STDIN                       Function
-----                       --------
9                           n = 9
10 20 20 10 10 30 50 10 20  ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]
Sample Output

3



*/

#include<iostream>
#include<map>
#include <bits/stdc++.h>
using namespace std;
int sockmerchant(int a[],int n)
{
  
   // int ar[100];
    map<int,int> mp;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
       mp[a[i]]++;
       if(mp[a[i]]%2 ==0)
          cnt++;
    }
     
   
    
   return cnt;

}


int main()
{
    int a[] = {10,10,10,20,20,20,30,40};
    int cnt = sizeof(a)/sizeof(a[0]);
    int count = 0;

    count = sockmerchant(a,cnt);
    cout<<"Number of arrays is "<<count;
}