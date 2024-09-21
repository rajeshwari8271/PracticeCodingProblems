#include<iostream>
#include<vector>
using namespace std;

int isDuplicate(int D[],int n)
{
    int flag = 0;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        int p = D[i];
        v.push_back(p);
        for(int j = 0; j<n && j!=i ;j++)
        {
           if ( p == D[j] )
           {
              flag = 1;
              v.pop_back();
               
           }
        }

    }
    
   // if(flag)
    {
        vector<int>::iterator it;

        for(it = v.begin();it != v.end(); it++)
        {
            cout<<*it<<" ";
        }

    }
    cout<<endl;
    return flag;
}



int main()
{
      int D1[] = {1,2,3,3,9,9,8,7,8};
        int D2[] = {1,2,3,9,1};
      int D3[] = {1,2,3,2,9};
    int n = sizeof(D1)/sizeof(D1[0]);
    cout<<"is Duplicate  "<<isDuplicate(D1,n)<<endl;
    cout<<"is Duplicate  "<<isDuplicate(D2,n)<<endl;
    cout<<"is Duplicate  "<<isDuplicate(D3,n)<<endl;
}