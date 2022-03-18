/* if find functino is unable to locate the required substring then it returns->string:: npos*/
#include <iostream>
using namespace std;


int main(){
    string s="prasadpatil";
    int res =s.find("xyz");
    if(res==string::npos) 
    cout<<"Not Present\n";
    else 
        cout<<"Index of occurence of first letter\n"<<res;
return 0;
}