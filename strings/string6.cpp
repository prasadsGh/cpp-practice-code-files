#include <iostream>
#include <cstring>
using namespace std;
//c style strings 
//three functions strlen(),strcmp(),strcpy();
//backslash zero is important for char array 
int main(){
    char s1[]="prasad";
    char s2[]={'p','a','t','i','l','\0'};
    cout<<strlen(s1)<<endl;
    int res =strcmp(s1,s2);
    if(res==0) cout<<"same\n";
    else if(res<0) cout<<"Smaller\n";
    else cout<<"Larger\n";
    cout<<strcpy(s1,s2)<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    
return 0;
}
// we have to initialise char[ immediately after declaration