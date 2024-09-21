/*
It is New Year's Day and people are in line for the Wonderland rollercoaster ride. 
Each person wears a sticker indicating their initial position in the queue from  to . 
Any person can bribe the person directly in front of them to swap positions, but they 
still wear their original sticker. One person can bribe at most two others.

Determine the minimum number of bribes that took place to get to a given queue order. 
Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic.

Example


If person  bribes person , the queue will look like this: . Only  bribe is required. 
Print 1.


Person  had to bribe  people to get to the current position. Print Too chaotic.
Sample Input

STDIN       Function
-----       --------
2           t = 2
5           n = 5
2 1 5 3 4   q = [2, 1, 5, 3, 4]
5           n = 5
2 5 1 3 4   q = [2, 5, 1, 3, 4]
Sample Output

3
Too chaotic


*/
#include<iostream>
using namespace std;

void findNoOfBribe (int q[],int n)
{
    int cnt =0;//n=q.size();
    bool chaotic=false;
    for(int i=0;i<n;i++)
       {
           if(q[i]-(i+1)>2)chaotic=true;
           for(int j=q[i]-2;j<i;j++)
              { if(q[j]>q[i])
                  cnt++;}
           
       
       }
       if(chaotic==true)
         cout<<"Too chaotic\n";
        else
          cout<<cnt<<endl;
 }


int main()
{
    int a[] = {4,1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    findNoOfBribe(a,n);
}
