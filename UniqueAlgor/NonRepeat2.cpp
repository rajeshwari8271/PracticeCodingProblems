#include<iostream>
#include<unordered_map>
#include<iterator>

#include<algorithm>
#include<set>
using namespace std;
using namespace std;
int printLongestSubstring(string s)
{
    int j,maximum=0,bptr=0,aptr=0,k;
    set<char> se;
    int l=s.length();
    /* if (l==0)return 0;
    if (l==1)return 1; */
    
    while(bptr<l)
     {
         if(se.find(s[bptr])==se.end())
         {
             se.insert(s[bptr]);
             bptr++;
             k=se.size();
             maximum =max(k,maximum);
         }
         else
         {
             se.erase(s[aptr]);
              aptr++;            
             
         }

         
     }
    
    set<char> :: iterator i;
    for(i=se.begin();i != se.end();i++)
    {
        cout<<*i;
    }
    cout<<endl;
    
    
    
    return maximum;

}

int main()
{
    string str="aab";
    cout<<"Maximum len substring without repeating character is "<< printLongestSubstring(str);
return 0;
}