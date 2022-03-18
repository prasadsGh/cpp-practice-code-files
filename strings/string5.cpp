#include <iostream>
#include <string>
using namespace std;
//Three ways to traverse the string
int main(){
    string s="PrasadPatil";
    for( int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    for(char x: s)
    {
        cout<<x;
    }
    cout<<endl;
    for(auto i=s.begin();i!=s.end();i++ )
    {
        cout<<(*i);
    }
    cout<<endl;
return 0;
}