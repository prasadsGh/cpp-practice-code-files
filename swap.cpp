//this code is used to swap the two numbers using refernce
#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=10,b=20;
    cout<<a<<" "<<b<<"\n";
    swap(a,b);
    cout<<a<<" "<<b<<endl;
return 0;
}

// output:
// 10 20
// 20 10