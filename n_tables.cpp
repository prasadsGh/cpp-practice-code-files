#include <iostream>
using namespace std;
int main (){
    int n,i,k;
    cout<<"Enter the number: ";
    cin>>k;
   for(i=1;i<=k;i++){
       for(n=1;n<=10;n++){
           cout<<(n*i)<<" ";

       }
       cout<<"\n";
   }
return 0;

}