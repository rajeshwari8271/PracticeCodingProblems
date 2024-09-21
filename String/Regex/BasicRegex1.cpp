#include<iostream>
#include<regex>
using namespace std;
int main()
{//pgm replaces a particular string wherever it appears is a sentence with the replacement string
//here ix is replaced with Seven
   string pattern="ix";
    regex rgx;
    //string pattern2("six");
    //regex second(pattern);
    //first.assign(second);
    //regex e("six");

   // second.assign("[0-9A-F]+" ,regex::ECMAScript);
   // second.assign({'^','a'}, regex::ECMAScript | regex::icase);

    using namespace std::regex_constants;
    //second.assign(pattern,icase);//icase flag for irrespective of case
    rgx.assign(pattern,regex::ECMAScript | icase);//assign new regular expression overriting the previous regular expression

    string subject="sixty six of sixty six is six";
    string replacement="Seven";
    cout<<"after altering "<<regex_replace(subject,rgx,replacement);
    cout<<endl;
   // cout<<"Second "<<regex_replace(subject,second,replacement); 
    cout<<endl;
     
}