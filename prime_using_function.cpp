#include <iostream>
using namespace std;
 
 int fun(int x){
      x=2;
      int n;

     if(n%x==0 )
     cout << x<<" ";
     else if(x==n){
         return;
     }
    else {
        fun(x++);

    }
      }
      int main(){
          int x;
          int n;
          cout<<"Enter the number for its prime factors";
          cin>>n;
          
          fun(x);
          return 0;
      }
