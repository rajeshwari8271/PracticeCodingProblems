#include<iostream>
using namespace std;
void sortpair(pair<int,int> p[],int n);
int MaxLen(pair<int,int> p[],int n);
int main()
{
    int size;
    pair<int,int> p[]={{5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90} };
    size=sizeof(p)/sizeof(p[0]);
    sortpair(p,size);
    cout<<endl<<"Max Length of chain of pairs is "<< MaxLen(p,size);

}
void sortpair(pair<int,int> p[],int n)
{
    int i,j;
    pair<int,int> tmp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i].first>p[j].first)
            {
                tmp=p[i];
                p[i]=p[j];
                p[j]=tmp;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"{"<<p[i].first<<" "<<p[i].second<<"}";
    }
}
int MaxLen(pair<int,int> p[],int n)
{
    int Maxlen=1,i,j,len[20];
    len[0]=1;
    for(i=1;i<n;i++)
    {
        len[i]=1;
        for(j=0;j<i;j++)
        {
            if((p[i].first>p[j].second)&&(len[i]<len[j]+1))
            {
                len[i]=len[j]+1;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(Maxlen<len[i])
        {
            Maxlen=len[i];
        }


    }
    return Maxlen;
}