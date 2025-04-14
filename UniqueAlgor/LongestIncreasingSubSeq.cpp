#include<iostream>
using namespace std;

int LongestIncreasingSubseq(int a[],int n)
{
    int maxlen = 1;
    int LIS[9];
    LIS[0] = 1;
    for(int i=1;i<n;i++)
    {
        LIS[i] = 1;
        for(int j=0;j<i;j++)
        {
            if( (a[i]>a[j]) && (LIS[i] < (LIS[j]+1)) )
            {
                LIS[i] = LIS[j]+1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(maxlen<LIS[i])
        {
            maxlen = LIS[i];
        }
    }

    return maxlen;


}

int main()
{
    int a[9]={10, 22, 9, 33, 21, 50, 55, 60 ,66};
    int n = sizeof(a)/sizeof(a[0]);

    cout<<"Longest Increasing subsequence is "<<LongestIncreasingSubseq(a,n);
}
