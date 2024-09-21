#include<iostream>
using namespace std;

void permute(string str,int s,int n)
{
        if(s==n)
        {
            cout<<str<<" ";
            return;
        }
        else
        {
            for(int i=s;i<n;i++)
            {
                swap(str[s],str[i]);
                permute(str,s+1,n);
                swap(str[s],str[i]);

            }
        }
        


}

int main()
{
    string str="123";
    int l=str.length();
    cout<<l<<endl;
    permute(str,0,l);
}