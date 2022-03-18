#include <iostream>
using namespace std;
//reversing string 
int main(){
    string s;
    cout<<"enter a string: ";
    cin>>s;
    string newString="";
    int j=s.length()-1;
    while(j>=0)
    {
        newString=newString+s.at(j);
        j--;
    }
    cout<<newString<<endl;


return 0;
}