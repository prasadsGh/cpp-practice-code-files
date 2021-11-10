#include <iostream>
using namespace std;
int main(){
    int arr[]={10,23,45,67,7};
    cout <<sizeof(arr)<<"\n";
    int arr1[5]={10,20};

   cout<< sizeof(arr1)/sizeof(arr[0]);
    return 0;
    
}