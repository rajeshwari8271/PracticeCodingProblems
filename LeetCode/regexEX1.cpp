#include<iostream>
#include<regex>
using namespace std;
int main()
{
    if(regex_match(" a",regex("\\s[a-z](.*)") ))
          cout<<"String matched\n";
    else
    {
        cout<<"Not Matched\n";
    }
    
    string s("aaaa");
    regex e("(a)(.*)");
    if(regex_match(s,e))
        cout<<"Character matched\n";
    else
    {
        cout<<"Not matched\n";
    }
    
    
}