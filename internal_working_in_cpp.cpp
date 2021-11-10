#include <iostream>
using namespace std;
 void fun2(){
     cout<<"Inside fun2()\n";
 }
 void fun1(){
     cout<<"Before fun2()\n";
     fun2();
     cout<<"After the fun2()\n";

 }
 int main(){

     cout << "Before fun1()\n";
     fun1();
     cout << "After the fun1()\n";
     return 0;
 }