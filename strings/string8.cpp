#include <iostream>
using namespace std;
//check palindrome
int main(){
    string s;
    cout<<"ENter the string:";
    cin>>s;
    int i=0;
    int j=s.length()-1;
    while(true)
    {
        if(s.at(i)!=s.at(j))
        {
            cout<<"NO\n";
            break;
        }
        else {
            i++;
            j--;
            if(s.length()-1==i)
            {   cout<<"YES\n";
                break;
            }
        }
    }
return 0;
}