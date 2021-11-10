#include <iostream>
using namespace std;
int main(){
/*There are n number of cups , first cup is picked up by you, if last cup is 
picked up by you , you will win*/
/*There are only two players , you and your opponents*/
int n;
cout <<"Enter the number of cups\n";
cin>>n;
if(n%2==0)
{cout <<"You lose";
}
else{
    cout<<"You win";

}
return 0;
}

