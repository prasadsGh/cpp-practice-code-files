#include <iostream>
using namespace std;
int main(){
    int n,x;
 cout<<"Enter the number";
    cin>>n;
    cout<<"ENter the number whose multiple are need to be skipped";
    cin>>x;

for(int i=1;i<=n;i++){
    if(i%x==0){
        continue;

    }
    else
        cout<<i<<" ";
    
}
return 0;
}

/*
OUTPUT:
Enter the number10
ENter the number whose multiple are need to be skipped2
1 3 5 7 9 




*/