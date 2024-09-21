#include<iostream>
#include<unordered_map>

#include<string>
using namespace std;
using namespace std;
string printLongestSubstring(string str)
{
    int l=str.length();
    int st=0;
    int start=0;
    int currlen=0,cl=0;
    int maxlen=0;
    unordered_map<char ,int > umap;
    umap[str[0]]=0;
    if(str.size()==0) maxlen = 0;

    else if(str.size()==1)maxlen = 1;

    else
    {
        for(int i=1;i<l;i++)
        {
        
            if(umap.find(str[i])==umap.end())//if char is not in hashmap add to hashmap
            {
             umap[str[i]]=i;
             cl++;
             
            }
            else
            {
                cout<<"str a in map "<<i<<endl;
                if(umap[str[i]]>=st)
                {
                    currlen=i-st;
                    if(maxlen<currlen)
                    {
                        maxlen=currlen;
                        start=st;
                    }
                    st=umap[str[i]]+1;

                }
                umap[str[i]]=i;

            
            }

        /* if(maxlen<(i-st))
        {
            maxlen=i-st;
            start=st;
        } */

        auto it=umap.find(str[i]);
        cout<<it->first<<" "<<it->second<<endl;

        
    }
    
   if(maxlen==0)
        {
            maxlen=cl+1;
        }  
    }
    cout<<"maxlen "<<maxlen<<endl;
    return (str.substr(start,maxlen));
    

}

int main()
{
    string str="aab";
    cout<<"Maximum len substring without repeating character is "<< printLongestSubstring(str)<< " end";

}