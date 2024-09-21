/*
Example
The hiker first enters a valley  units deep. Then they climb out and up onto a mountain  units high. Finally, the hiker returns to sea level and ends the hike.

Function Description

Complete the countingValleys function in the editor below.

countingValleys has the following parameter(s):

int steps: the number of steps on the hike
string path: a string describing the path
Returns

int: the number of valleys traversed
Input Format

The first line contains an integer , the number of steps in the hike.
The second line contains a single string , of  characters that describe the path.

Constraints

Sample Input

8
UDDDUDUU
Sample Output

1Explanation

If we represent _ as sea level, a step up as /, and a step down as \, the hike can be drawn as:

_/\      _
   \    /
    \/\/

*/

#include<iostream>
#include<string>
using namespace std;

int findValleyCnt(int n,string s)
{
  int cnt =0,val=0;
   
   for(char c:s)
   {
       if(c=='U'){
            cnt+=1;
            if(cnt==0)
               val+=1;
       }
       else{
            cnt-=1;
            
       }
   }



    return val;
}



int main()
{
   int n = 8;
   string s = "UDDDUDUU";//"DDUUDDUDUUUD";//"UDDDUDUU";
   cout<<findValleyCnt(n,s);


}