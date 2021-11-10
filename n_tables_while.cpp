#include <iostream>
using namespace std;
int main(){
    int i,k;
    cout<<"Enter the number\n";
    cin>>k;
    int n=1;
    while(n<=k){
        for(i=1;i<=10;i++){
            cout<<(n)*i<<" ";
        }
        n++;
        cout<<"\n";
    }
    return 0;
}