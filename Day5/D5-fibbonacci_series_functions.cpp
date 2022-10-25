#include <iostream>
using namespace std;
void fib(int n)
{
    int first = 0;
    int second = 1;
    cout << first << " " << second << " ";
    // first=-1 second=1
    for (int i = 1; i <= n - 2; i++)
    {
        int ans;
        ans = first + second;
        cout << ans << " ";
        first = second;
        second = ans;
    }
}

int main()
{
    int n;
    cout << "enter the value of n:";
    cin >> n;
    fib(n);
    return 0;
}