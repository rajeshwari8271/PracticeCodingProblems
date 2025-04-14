#include<iostream>
using namespace std;
bool PrimeChk(int);
int main()
{
    // num%2!=0 is prime 
    //prime number is a number which is not divisible by other numbers except itself and 1
    // so 2,3,5,7 is prime num%2!=0 but 9 is not prime so to solve this  i<n/2
    int n;
    bool isPrime;
    cout<<"Enter the limit for prime numbers";
    cin >>n;
    for(int i=2;i<n;i++)
    {
        isPrime=PrimeChk(i);
        if(isPrime)
        cout<<i<<" ";

    }
}

    bool PrimeChk(int n)
    {
        bool isPrim=true;
        for(int j=2;j<=n/2;j++)
        {
            if((n%j)==0)
            {
                isPrim=false;
                break;
            }
            
        }
        return isPrim;
        
    }

