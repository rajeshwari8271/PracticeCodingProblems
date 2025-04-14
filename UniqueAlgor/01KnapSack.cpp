#include<iostream>
#include<algorithm>
using namespace std;

int KnapSack(int w[],int v[],int n,int C)
{
    int c,i;
    int k[4][51];
    for(i=0;i<=n;i++)
    {
        for(c=0;c<=C;c++)
        {
            if(i==0||c==0)
                k[i][c]=0;
            else if(w[i-1]<c)
            {
                k[i][c]=max(v[i]+k[i-1][c-w[i-1]] ,k[i-1][c] );
            }
            else
            {
                k[i][c]=k[i-1][c];
            }
        }
    }

return k[n][C];
}

int main()
{
    int w[]={10,20,30};
    int v[]={60,100,120};
    int n=sizeof(w)/sizeof(w[0]);
    int C=50;
    cout<<KnapSack(w,v,n,C);
}