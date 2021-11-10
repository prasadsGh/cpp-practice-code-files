#include <iostream>
using namespace std;
int main()
{
    int n, ans;
    cout << "Enter the number: ";
    cin >> n;
    ans = 1;
    while (n > 0)
    {
        ans = ans * n;
        n--;
    }
    cout<<"The factorial of n is "<<ans;
    return 0;
}
