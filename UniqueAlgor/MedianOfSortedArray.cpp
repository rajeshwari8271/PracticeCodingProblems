//MERGE TWO SORTED ARRAYS
#include<iostream>
using namespace std;
float median(int a[4],int b[4],int m,int n)
{
    int c[8],i=0,j=0,k=0,p;
    /*
    int a[]={2,3,4,5};
    int b[]={1,6,7,8};*/
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
        
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    int l=sizeof(c)/sizeof(c[0]);
for(k=0;k<l;k++)
{
    cout<<c[k]<<" ";
}

cout<<endl<<"c[l/2]= "<<c[l/2]<<" c[l/2]-1= "<<c[l/2]-1; 
cout<<endl<<"l= "<<l<<" l/2= "<<l/2;

if((l%2)==0)
    return( ((c[(l/2)-1])+c[l/2])/2);
else
{
     return(c[(l/2)]);
}



}
int main()
{
    int a[]={4,5,9,10};
    int b[]={1,6,7,8};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<"m= "<<m<<" n= "<<n<<endl;

   cout<<endl<< "median of two sorted Arrays "<<median(a,b,m,n);

}
