#include<iostream>
#include<string>
using namespace std;
#include<algorithm>
int ExpandString(string s,int left,int right)
{
    if(s.empty() || left>right)return 0;
    while(left>=0 && right<s.size() && s.at(left)==s.at(right))
    {
        left--;
        right++;
    }
    return right-left-1;

}
 string longestPalindrome( std::string s)
{
    if(s.empty())return 0;
    int start=0,end=0,i,len1,len2,len;
    for(i=0;i<s.size();i++)
    {
        len1=ExpandString(s,i,i);
        len2=ExpandString(s,i,i+1);
        len=max(len1,len2);
        //cout<<" len1 "<<len1<<" len2 "<<len2<<" len "<<len;
        if(len>(end-start))
        {
            start=i-((len-1)/2);
            end=i+(len/2);
        }
    }
    cout<<"start "<<start<<" end "<<end<<endl; 
   
    cout<<"substring length "<<(end-start)<<endl;
    int l=end-start;
    return(s.substr(start,l+1));
}

int main()
{
    string s="bbacdadcast";
  cout<<"Longest Palindrome is "<<longestPalindrome(s);
}