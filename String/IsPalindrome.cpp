#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

bool isPalindrome(string s)
{
    int l=0;
    int r=s.length()-1;
    while(l<r)
    {
        if(!isalnum(s[l]))
            l++;
        else if(!isalnum(s[r]))
            r--;
        else if( tolower(s[l++]) != tolower(s[r--])) 
            return false;
                
        
        
    }

    return true;
}

int main()
{
    string s="race aaa ecar";
    if(isPalindrome(s))
        cout<<"True";
    else
    {
        cout<<"False";
    }
    
}