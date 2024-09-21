//Find missing element in sorted consecutive array
#include<iostream>
using namespace std;
/* int FindMissingNo(int ar[],int l)
{
    int p=0;
    
    for(int i=0;i<l-1;i++)
    {
        if((ar[i+1]-ar[i])==2)
        {
            p=i;
            break;
           
        }
    } 

return (ar[p]+1);
}*/

int FindMissingNo(int ar[],int l)
{
    int low=0,high=l-1;
    int mid;
    while(low<high)
    {
         mid=(high+low)/2;
        if((ar[mid]-mid)==ar[0])
        {
            if((ar[mid+1]-ar[mid])>1)
            {
                return(ar[mid]+1);
            }
            else
            {
                
                low=mid+1;
            }
        }

        else

        {
            if((ar[mid]-ar[mid-1])>1)
            {
                return(ar[mid]-1);
            }
            else
            {
                high=mid-1;
            }
            
        }
           
       

    }
    return -1;
}


int main()
{
    //sorted consecutive array
    int ar[]={21,22,23,24,25,26,27,28,30};
    int l=sizeof(ar)/sizeof(ar[0]);
    cout<<"Missing element in array "<< FindMissingNo(ar,l);


}