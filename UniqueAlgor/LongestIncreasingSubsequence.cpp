#include<iostream>
using namespace std;
int FindLIS(int[],int);
const int size=20;
int main()
{
    int s[9]={10, 22, 9, 33, 21, 50, 41, 60 };
    int size= sizeof(s)/sizeof(s[0]);
    cout<<"Longest Increasing Subsequence size is "<<FindLIS(s,size);

}

int FindLIS(int a[],int size)
{
    int i,j;
    int LIS[20];
    int maxLIS=1;
    LIS[0]=1;

    for(i=1;i<size;i++)
    {
        LIS[i]=1;
        for(j=0;j<i;j++)
        {
            if((a[i]>a[j])&&(LIS[i]<LIS[j]+1))
            {
                LIS[i]=LIS[j]+1;
            }
        }
    }

for(i=0;i<size;i++)
{
   if(maxLIS<LIS[i])
   maxLIS=LIS[i]; 
}
return maxLIS;
}