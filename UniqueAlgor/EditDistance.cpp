#include<iostream>
#include<cstring>
using namespace std;
int EditDist(char s1[],char s2[],int m,int n);
int min(int a,int b, int c);
int main()
{
    char s1[]="cat";
    char s2[]="cut";
    int len1=std::strlen(s1);
    int len2=std::strlen(s2);
    cout<<len1<<" "<<len2<<endl;
    cout<<EditDist(s1,s2,len1,len2);
}
int EditDist(char s1[],char s2[],int m,int n)
{
    int dis[100][100],i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0)
            {
                dis[i][j]=j;
            }
            else if(j==0)
            {
                dis[i][j]=i;
            }
            else if(s1[i-1]==s2[j-1])
            {
                dis[i][j]=dis[i-1][j-1];
            }
            else
            {
                dis[i][j]=1+min(dis[i][j-1],dis[i-1][j],dis[i-1][j-1]);
            }
            
        }
    }

    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<dis[i][j]<<" ";
        }
        cout<<"\n";
    }



    return(dis[m][n]);


}
int min(int a,int b, int c)
{
    if((a<b)&&(a<c))
    {
        return a;
    }
    else if(b<a && b<c)
    {
        return b;
    }
    else
    {
        return c;
    }
    
        
    
}