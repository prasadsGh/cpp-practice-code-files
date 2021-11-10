#include <iostream>
using namespace std;
 int quo(int x){
     int n;
     if(n>10){
         return (x-x%10)/10;}


     else {
         return false;
     }
 }
 int main()
 { int x,n;
     cout <<"Enter the number ";
     cin>>x;

     quo(x);
 }