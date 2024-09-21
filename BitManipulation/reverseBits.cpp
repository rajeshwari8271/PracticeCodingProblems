#include<iostream>
#include<bitset>
using namespace std;
int main()
{ 
    int n= 11;
    int rev = 0;
     cout<<" Number "<<n<<" "<<bitset<8>(n)<<endl;
    while(n>0)
    {
        rev = rev << 1;
        if(( n & 1) == 1)
        {
            rev = rev ^ 1;

        }
        n = n >> 1;

    }

    //cout<<" Number "<<n<<" "<<bitset<8>(n)<<endl;
    cout<<"After Reversing  "<<rev<<" "<<bitset<8>(rev);




}