#include <iostream>
using namespace std;
int main(){
   unsigned int n;
    cout<<"Enter the year\n";
    cin>>n;
   if (n%100==0 or n%400==!0){
       cout<<"Not a leap year0";
   }
   else if(n%4==0 or n%400==0){
cout<<"Leap Year";
   }
   else{
       cout<<"Not a leap year";
   }
    return 0;

}