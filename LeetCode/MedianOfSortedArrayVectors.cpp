#include<iostream>
#include<vector>
//o(log m+log n) time and also the space
using namespace std;
double CalculateMedian(vector<int> a,vector<int> b)
{
    int m=a.size();int i=0,j=0;
    int n=b.size();
    vector<int> c;
    vector<int>::iterator it;
    while(i<m && j<n)
    {
       
        if(a.at(i)<b.at(j))
        {
            c.push_back(a.at(i));
            i++;
        }
        else
        {
             c.push_back(b.at(j));
             j++;
        }
        
    }

    while(i<m)
    {
         c.push_back(a.at(i++));
       
    }

    while(j<n)
    {
        c.push_back(b.at(j++));
       
    }

    for(it=c.begin();it!=c.end();it++)
    std::cout<<*it<<" "; 
    int l=c.size();
    if((l/2)==0)
    {
        return(((c[((l/2)-1)])+c[l/2])/2);
    }
    else
    
        return c[l/2];

}

int main()
{
    std::vector<int> a={1,3,5,6};
    std::vector<int> b={2,4,7};
    cout<<"Medain of arrays is "<<CalculateMedian(a,b);


}