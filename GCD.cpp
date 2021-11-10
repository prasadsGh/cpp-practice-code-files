#include <iostream>
using namespace std;
int main(){
    int a ,b, c,i;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    
    
     c =min(a,b);
    for (i=1;i<=c;i++){
        if(a%i==0 and b%i==0){
            cout<<i;

        }
    }
}