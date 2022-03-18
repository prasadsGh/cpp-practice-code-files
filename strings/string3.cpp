#include <iostream>
using namespace std;
//This is lexiographic comparisons 
int main(){
    string s1="xbc",s2="bcs";
    if(s1==s2) cout<<"same"<<endl;
    else if(s1<s2) cout<<"Smaller\n";
    else cout<<"larger\n";
return 0;
}