//reference is like the another name for a variable and it is shown by using the 
//ampersand operator(&)
//refences are generally used to avoid  the copy of large objects 
//for eg:  we can do like vector<int> &v; then the variable will not be copied to the function 
//instead just the memory address will be shared
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=10;
    int &y=x;
    cout<<y<<endl;
    x+=5;
    cout<<y<<endl;
    y+=5;
    cout<<x<<endl;

return 0;
}

// output:
// 10
// 15
// 20
